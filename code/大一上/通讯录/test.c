#include"contact.h"
enum contact_name 
{
	EXIT,
	ADD,
	DEL,
	SERCH,
	MODIFY,
	SHOW,
	SORT
}; 
int main()
{
	int input = 0;
	con txl;
	InitContact(&txl);
	do
	{

		system("cls");
		menu();
		scanf("%d", &input);
		switch (input)
		{
		case ADD:
			addcontact(&txl);
			break;
		case DEL:
			deltxl(&txl);
			break;
		case SERCH:
			serchrtxl(&txl);
			break;
		case MODIFY:
			modifytxl(&txl);
			break;
		case SHOW:
			show(&txl);
			break;
		case SORT:
			txlsort(&txl);
			break;
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