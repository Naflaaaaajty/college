#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<ctype.h>
#include<string.h>


//int main()
//{
//	int i = 0;
//	while (i < 3)
//		i++;
//	system("pause");
//	return 0;
//}
//int main()
//{
//	printf("%c", toupper('A'));
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9 };
//	int arr1[10] = { 0 };
//	/*char arr[] = { 'a','b','c','d','\0'};
//	char arr1[5];*/
//	printf("%x",memcpy(arr1, arr, 5));
//	printf("%x",arr1);
//
//	return 0;
//}
//int main()
//{
//	int a = 1,b=3;
//	int c = a ^ b;
//	printf("%d", c);
//	return 0;
//}
//int main()
//{
//	int count = 0,i=0;
//	for ( i = 0; i < 2; i++)
//	{
//		count++;
//	}
//	i = 0;
//	for (i = 0; i < 2; ++i)
//		count++;
//
//	return 0;
////}
//#include<stdio.h>
//int main()
//{
//    int i;
//    double x;
//    x = 7.7;
//    scanf("%d", &i);
//    if (i <= 1)
//    {
//        printf("实际利率=%.2lf%%", x * 0.5);
//    }
//    else if ((i <= 3) && (i > 1))
//    {
//        printf("实际利率=%.2lf%%", x * 0.7);
//    }
//    else if ((i > 3) && (i <= 5))
//    {
//        printf("实际利率=7.7%%");
//    }
//    else if (i > 5)
//    {
//        printf("实际利率=%.2lf%%", x * 1.1);
//    }
//    else if (i <= 0)
//    {
//        printf("error");
//    }
//    return 0;
//}
//#include <stdio.h>
//#include <stdlib.h>
//
//int main()
//{
//    int a, count = 0, tmp;
//    scanf("%d", &a);
//    for (int i = 1; i <= a; i++)
//    {
//        if (i < 10)
//        {
//            if ( i== 2 || i == 1 || i == 9)
//                count += i;
//        }
//        else {
//            
//        tmp = i;
//        while (tmp)
//        {
//   
//            if (tmp % 10 == 2 || tmp % 10 == 1 || tmp % 10 == 9|| tmp %10==0)
//            {
//                count += i;
//                break;
//            }
//            tmp /= 10;
//        }
//    }
//    }
//    printf("%d", count);
//    return 0;
//}
//int main(int argc, char* argv[])
//{
//    int count = 0, a = 0;
//    scanf("%d", &count);
//    a = count;
//    while (count>2) {
//        a += (count / 3);
//        count = count / 3 + count % 3;
//    }
//    printf("%d", a);
//    return 0;
//}
//#include <stdio.h>
//#include <stdlib.h>
//#include <malloc.h>
//
//int getnk(int n, int m, int* pn)
//{
//    int count = 0;
//    while (n <= m)
//    {
//        count += pn[n];
//        n++;
//    }
//    return count;
//}
//int main()
//{
//    int nums, k, count = 0;
//    int* pn;
//    scanf("%d %d", &nums, &k);
//    pn = (int*)malloc(4 * nums);
//    for (int i = 0; i < nums; i++)
//    {
//        scanf("%d", &pn[i]);
//        if (pn[i] % k == 0)
//            count++;
//    }
//    for (int i = 2; i <= nums; i++)
//    {
//        int j = 0, l = i - 1;
//        while (l <= nums - 1)
//        {
//            if (getnk(j, l, pn) % k == 0)
//                count++;
//            j++;
//            l++;
//        }
//    }
//    printf("%d", count);
//    return 0;
//}
#define _GNU_SOURCE
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <stdbool.h>
#include <string.h>
#include <err.h>
#include <openssl/bio.h>
#include <openssl/pem.h>
#include <openssl/err.h>
#include <openssl/engine.h>

/*
 * OpenSSL 3.0 deprecates the OpenSSL's ENGINE API.
 *
 * Remove this if/when that API is no longer used
 */
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#define PKEY_ID_PKCS7 2

static __attribute__((noreturn))
void format(void)
{
	fprintf(stderr,
		"Usage: extract-cert <source> <dest>\n");
	exit(2);
}

static void display_openssl_errors(int l)
{
	const char* file;
	char buf[120];
	int e, line;

	if (ERR_peek_error() == 0)
		return;
	fprintf(stderr, "At main.c:%d:\n", l);

	while ((e = ERR_get_error_line(&file, &line))) {
		ERR_error_string(e, buf);
		fprintf(stderr, "- SSL %s: %s:%d\n", buf, file, line);
	}
}

static void drain_openssl_errors(void)
{
	const char* file;
	int line;

	if (ERR_peek_error() == 0)
		return;
	while (ERR_get_error_line(&file, &line)) {}
}

#define ERR(cond, fmt, ...)				\
	do {						\
		bool __cond = (cond);			\
		display_openssl_errors(__LINE__);	\
		if (__cond) {				\
			err(1, fmt, ## __VA_ARGS__);	\
		}					\
	} while(0)

static const char* key_pass;
static BIO* wb;
static char* cert_dst;
static bool verbose;

static void write_cert(X509* x509)
{
	char buf[200];

	if (!wb) {
		wb = BIO_new_file(cert_dst, "wb");
		ERR(!wb, "%s", cert_dst);
	}
	X509_NAME_oneline(X509_get_subject_name(x509), buf, sizeof(buf));
	ERR(!i2d_X509_bio(wb, x509), "%s", cert_dst);
	if (verbose)
		fprintf(stderr, "Extracted cert: %s\n", buf);
}

int main(int argc, char** argv)
{
	char* cert_src;
	char* verbose_env;

	OpenSSL_add_all_algorithms();
	ERR_load_crypto_strings();
	ERR_clear_error();

	verbose_env = getenv("KBUILD_VERBOSE");
	if (verbose_env && strchr(verbose_env, '1'))
		verbose = true;

	key_pass = getenv("KBUILD_SIGN_PIN");

	if (argc != 3)
		format();

	cert_src = argv[1];
	cert_dst = argv[2];

	if (!cert_src[0]) {
		/* Invoked with no input; create empty file */
		FILE* f = fopen(cert_dst, "wb");
		ERR(!f, "%s", cert_dst);
		fclose(f);
		exit(0);
	}
	else if (!strncmp(cert_src, "pkcs11:", 7)) {
		ENGINE* e;
		struct {
			const char* cert_id;
			X509* cert;
		} parms;

		parms.cert_id = cert_src;
		parms.cert = NULL;

		ENGINE_load_builtin_engines();
		drain_openssl_errors();
		e = ENGINE_by_id("pkcs11");
		ERR(!e, "Load PKCS#11 ENGINE");
		if (ENGINE_init(e))
			drain_openssl_errors();
		else
			ERR(1, "ENGINE_init");
		if (key_pass)
			ERR(!ENGINE_ctrl_cmd_string(e, "PIN", key_pass, 0), "Set PKCS#11 PIN");
		ENGINE_ctrl_cmd(e, "LOAD_CERT_CTRL", 0, &parms, NULL, 1);
		ERR(!parms.cert, "Get X.509 from PKCS#11");
		write_cert(parms.cert);
	}
	else {
		BIO* b;
		X509* x509;

		b = BIO_new_file(cert_src, "rb");
		ERR(!b, "%s", cert_src);

		while (1) {
			x509 = PEM_read_bio_X509(b, NULL, NULL, NULL);
			if (wb && !x509) {
				unsigned long err = ERR_peek_last_error();
				if (ERR_GET_LIB(err) == ERR_LIB_PEM &&
					ERR_GET_REASON(err) == PEM_R_NO_START_LINE) {
					ERR_clear_error();
					break;
				}
			}
			ERR(!x509, "%s", cert_src);
			write_cert(x509);
		}
	}

	BIO_free(wb);

	return 0;
}