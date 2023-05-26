#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#define N 30//最大容量
#define M 3//功课门数
typedef struct info
{
    int sid;//学号
    char name[20];//姓名
    int score[M];//M门功课的成绩
    double total;//总分
    double aver;//平均分
    int order;
}INFO;
typedef struct stu
{
    INFO data;//数据域
    struct stu* next;//指针域
}STU;
void showMenu();//显示菜单
STU* createClass(int n);//学生信息录入模块
void showStuInfo(STU* h);//学生信息显示模块
void searchStuInfo(STU* h, int n);//学生信息查询模块
void sortStuInfo(STU* h);//学生信息排序模块
void countStuInfo(STU* h);//学生信息统计模块
STU* deleteStuInfo(STU* h);//学生信息删除模块
void addStuInfo(STU* h);//学生信息新增模块
void changeStuInfo(STU* h, int n);//学生信息修改模块
void saveStuInfo(STU* h);//学生信息保存模块
STU* loadStuInfo(STU* h);//学生信息载入模块
