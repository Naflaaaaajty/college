#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
struct Stu
{
    char name[20];//名字
    int age;      //年龄
    char sex[5];  //性别
    char id[15]; //学号
};
int main()
{
    //打印结构体信息
    struct Stu s = { 20,"cym" , "男", "20180101"};
    //.为结构成员访问操作符
    printf("name = %s age = %d sex = %s id = %s\n", s.name, s.age, s.sex, s.id);
    //->操作符
    struct Stu* ps = &s;
    printf("name = %s age = %d sex = %s id = %s\n", ps->name, ps->age, ps->sex, ps ->id);


	system("pauuse");
	return 0;
}