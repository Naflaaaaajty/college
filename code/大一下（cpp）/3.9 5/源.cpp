#include<iostream>
#include<cmath>
using namespace std;
int taozi(int n)
{
	n--;
	int x = 1;
	while (n)
	{
		x = (x + 1) * 2;
		n--;
    }
	return x;
}
int main()
{
	int n;
	cin >> n;
	int x = taozi(n);
	cout << x;
	return 0;
}