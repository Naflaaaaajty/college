#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#define N 30//�������
#define M 3//��������
typedef struct info
{
    int sid;//ѧ��
    char name[20];//����
    int score[M];//M�Ź��εĳɼ�
    double total;//�ܷ�
    double aver;//ƽ����
    int order;
}INFO;
typedef struct stu
{
    INFO data;//������
    struct stu* next;//ָ����
}STU;
void showMenu();//��ʾ�˵�
STU* createClass(int n);//ѧ����Ϣ¼��ģ��
void showStuInfo(STU* h);//ѧ����Ϣ��ʾģ��
void searchStuInfo(STU* h, int n);//ѧ����Ϣ��ѯģ��
void sortStuInfo(STU* h);//ѧ����Ϣ����ģ��
void countStuInfo(STU* h);//ѧ����Ϣͳ��ģ��
STU* deleteStuInfo(STU* h);//ѧ����Ϣɾ��ģ��
void addStuInfo(STU* h);//ѧ����Ϣ����ģ��
void changeStuInfo(STU* h, int n);//ѧ����Ϣ�޸�ģ��
void saveStuInfo(STU* h);//ѧ����Ϣ����ģ��
STU* loadStuInfo(STU* h);//ѧ����Ϣ����ģ��
