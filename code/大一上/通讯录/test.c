#include"contact.h"
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
		case 1:
			addcontact(&txl);
			break;
		case 2:
			deltxl(&txl);
			break;
		case 3:
			serchrtxl(&txl);
			break;
		case 4:
			break;
		case 5:
			show(&txl);
			break;
		case 6:
			//txlsort(&txl);
			break;
		case 0:
			break;
		default:
			printf(" ‰»Î¥ÌŒÛ");
			break;
		}

	} while (input);
	system("pause");
	return 0;
}