#include<iostream>
#include"Date.h"
int main()
{
	Date d1, d2;
	
	d1.DatePrint();
	//d1 = d2;
	d1+=100;
	//cout << (d1>d2);
	cout << d1;
	Date d3=1;
	cout << d3;

	return 0;
}
