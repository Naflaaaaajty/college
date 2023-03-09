#include<iostream>
#include<cmath>
using namespace std;
int jc(int n)
{
	if (n > 1)
		return n * jc(n - 1);
	else if (n == 1)
		return 1;
}
int main()
{
	int n;
	cin >> n;
	int x=jc(n);
	cout << x;
	return 0;
}