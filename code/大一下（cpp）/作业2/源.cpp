//#include<bits/stdc++.h>
#include<iostream>

using namespace std;
int main()
{
	int a, b[1001];
	float j;
	cin >> a;
	for (int i = 0; i <= a - 1; i++)
	{
		cin >> b[i];
	}
	sort(b, b + a);
	for (int i = 1; i <= a - 2; i++)
	{
		j += b[i];
	}
	printf("%.2f", j / (a - 2));
}