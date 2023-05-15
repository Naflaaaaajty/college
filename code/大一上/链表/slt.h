#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef int sltdatetype;
typedef struct slistnode {
	sltdatetype date;
	struct slistnode* next;
}slistnode;
void sltprint(const slistnode* head);


