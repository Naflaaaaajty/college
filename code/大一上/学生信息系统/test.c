#include"student.h"
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
	slist* head=NULL;
	do
	{
		system("cls");
		menu();
		scanf("%d", &input);
		switch (input)
		{
		case ADD:
			add(&head);
			break;
		case DEL:
			delslist(&head);
			break;
		case SERCH:
			
			break;
		case MODIFY:
			mdflist(&head);
			break;
		case SHOW:
			showlist(&head);
			break;
		case SORT:
			listsort(&head);
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