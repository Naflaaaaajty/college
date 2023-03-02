#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<windows.h>
#include<assert.h>
#define max	100
void menu();
typedef struct contact {
	char name[20];
	int age;
	char tel[12];
	char adder[100];
	char sex[20];

}contact;
typedef struct con {
	contact arr[max];
	int count;

}con;
void InitContact(con* txl);
void addcontact(con* txl);
void show(con* txl);
void txlsort(con* txl);
int serch(const con* txl,char name[]);
void serchrtxl(const con* txl);
void deltxl(con* txl);
