#include"student.h"
extern int a;
enum contact_name
{
	EXIT,
	CREATCLASS,
	ADD,
	DEL,
	SERCH,
	MODIFY,
	SHOW,
	SORT
};
int main()
{
	password();
	int input = 0;
	LTNode* class=ListInit();
	a=scanclass();
	do
	{
		system("cls");
		menu();
		scanf("%d", &input);
		switch (input)
		{
		case CREATCLASS:
			creatclass(class);
			initclass(class);
			break;
		case ADD:
			stuadd(class);
			break;
		case DEL:
			
			break;
		case SERCH:
			
			break;
		case MODIFY:
			
			break;
		case SHOW:
			
			break;
		case SORT:
			
		case EXIT:
			
			break;
		default:
			printf(" ‰»Î¥ÌŒÛ");
			break;
		}
	} while (input);
	system("pause");
	return 0;
}