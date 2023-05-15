#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<assert.h>



#define name_max 20
#define sex_max 20
#define id_max 20


typedef struct student {
	char name[name_max];
	char sex[sex_max];
	char id[id_max];
	int math;
	int cpp;
	int english;
	int average;

}stu;
typedef struct sltstu {
	stu* stu_;
	struct sltstu* next;
}slist;
void add(slist** head);
slist* slistmalloc();
int pjs(slist* move);
slist* findby(slist* move);
void menu();
void showlist(slist** head);
void printslist(slist* move);
void delslist(slist** head);
slist* searchlist(slist* move);
void mdflist(slist** head);
void scanlist(slist** head);
void listsort(slist** head);
void my_qsort(slist** head, int (*cmp)(const void* e1, const void* e2));
int stu_cmp_name(const void* e1, const void* e2);
int stu_cmp_age(const void* e1, const void* e2);










