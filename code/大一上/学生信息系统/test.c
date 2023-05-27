#include"student.h"
extern int a;
extern passw* pass;
enum contact_name
{
	EXIT,
	CREATCLASS,
	ADD,
	DEL,
	SERCH,
	MODIFY,
	SHOW,
	SORT,
	ERASEALL
};
int main()
{		
	int input = 0;
	pass = (passw*)malloc(sizeof(passw));
	loadpass();
	/*password();*/
	LTNode* class=ListInit();
	if (pass->a)
	{
		class->size = pass->a;
		for (int i = 0; i < pass->a; i++)
		{
			ListPushBack(class, NULL);

		}
		LTNode* cur = class->next;
		while(cur!=class)
		{
			initclass(cur);
			cur = cur->next;
		}
	}
	if(pass->a)
	loadstu(class);
	do
	{
		average(class);
		system("cls");
		menu();
		scanf("%d", &input);
		switch (input)
		{
		case CREATCLASS:
			creatclass(class);
			backmenu();
			break;
		case ADD:
			stuadd(class);
			savestu(class);
			backmenu();
			break;
		case DEL:
			delstu(class);
			savestu(class);
			backmenu();
			break;
		case SERCH:
			search(class);
			backmenu();
			break;
		case MODIFY:
			modfiy(class);
			backmenu();
			break;
		case SHOW:
			showclass(class);
			backmenu();
			break;
		case SORT:
			sortclass(class);
			backmenu();
			break;
		case ERASEALL:
			destroyall(class);
			break;
		case EXIT:
			
			break;
		default:
			printf(" ‰»Î¥ÌŒÛ");
			break;
		}
	} while (input);
	system("pause");
	savestu(class);
	return 0;
}
