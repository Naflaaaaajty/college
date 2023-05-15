#include"slt.h"
void sltprint(const slistnode* head)
{
	slistnode* plist = head;
	while (plist)
	{
		printf("%d", plist->date);
		plist = plist->next;

	}
	printf("NULL");
}