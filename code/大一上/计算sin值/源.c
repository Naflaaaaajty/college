#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
#pragma pack(8)
int main()
{

	struct a {
		int x;
		char y[2];
		short z[3];
		char s[5];
		char n;
		short t[2];
		float m;
		double w;
	}A;
	A.x = 1;
	A.y[1] = 2;
	A.y[0] = 2;
	A.z[1] = 2;
	A.z[0] = 1;
	A.z[2] = 2;
	A.s[0] = 1;
	A.s[1] = 2;
	A.s[2] = 3;
	A.s[3] = 4;
	A.s[4] = 5;
	A.n = 1;
	A.t[1] = 2;
	A.t[0] = 2;
	A.m = 2;
	A.w = 5;
	

	int sb = sizeof(A);
	printf("%d",sb);
	return 0;
}