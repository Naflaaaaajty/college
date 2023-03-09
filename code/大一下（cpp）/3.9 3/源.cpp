#include<iostream>
#include<cmath>
using namespace std;
bool if_year(int a)
{
	if (((a % 4 == 0) && (a % 100 != 0)) || (a % 400 == 0))
		return true;
	return false;
}
int main()
{
	int a, b;
	cin >> a >> b;
	for (; a <= b; a++)
	{
		if (if_year(a))
			cout << a;
	}
	return 0;
}