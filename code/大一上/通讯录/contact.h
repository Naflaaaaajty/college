#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<windows.h>
#include<assert.h>
#include<stdlib.h>

#define max	3
#define name_max 20
#define tel_max	12
#define adder_max 100
#define sex_max	20
void menu();
typedef struct contact {
	char name[name_max];
	int age;
	char tel[tel_max];
	char adder[adder_max];
	char sex[sex_max];

}contact;
typedef struct con {
	contact* arr;
	int count;
	int count_max;
}con;
void InitContact(con* txl);
void addcontact(con* txl);
void show(con* txl);
void txlsort(con* txl);
int serch(const con* txl,char name[]);
void serchrtxl(const con* txl);
void deltxl(con* txl);
void modifytxl(con* txl);
void txlsort(const con* txl);
int txl_cmp_name(const void* e1, const void* e2);
int txl_cmp_age(const void* e1, const void* e2);



