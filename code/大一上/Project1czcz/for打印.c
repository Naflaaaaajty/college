#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
    /*char �������ڴ��д洢�����ַ���Ӧ�� ASCII ��ֵ��
����� %c ���������� ASCII���ת���ɶ�Ӧ���ַ�������� %d �������ô����������
���Ա���ֻ����ѭ��������%c����ʽ�������
*/
    char ch[] = { 73, 32, 99, 97, 110, 32, 100, 111, 32, 105, 116 , 33 };

    //�����鳤��
    int length = sizeof(ch);
    int i;
    for (i = 0; i < length; i++)
    {
        printf("%c", ch[i]);
    }

    return 0;
	system("pause");
	return 0;
}