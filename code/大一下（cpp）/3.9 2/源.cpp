#include<iostream>
#include<cmath>
using namespace std;
bool if_zhishu(int a)
{
	for (int i = 2; i < sqrt(a); i++)
	{
		if (a % i == 0)
			return true;
	}
	return false;
}
void zhishu(int *pa,int n)
{
	for (int i = 0; i < n; i++)
	{
		if (if_zhishu(pa[i]))
			continue;
		cout << pa[i]<<" ";
    }
}
int main()
{
	int n;
	cin >> n;
	int* arr = (int*)calloc(n, 4);
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	zhishu(arr,n);
	return 0;
}