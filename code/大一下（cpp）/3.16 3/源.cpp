#include<iostream>
#include<string>
#include<algorithm>

using namespace std;
int main()
{
	int a;
	cin >> a;
	string s[20],tmp;
	for (int i = 0; i < a; i++)
	{
		cin >> s[i];
	}
	for (int i = 0; i < a - 1; i++)
	{
		for (int j = 0; j < a - 1 - i; j++)
			if (s[j] > s[j + 1])
			{
				tmp = s[j];
				s[j] = s[j+1];
				s[j + 1] = tmp;
			}

	}
	for (int i = 0; i < a; i++)
		cout << s[i]<<'\n';
	return 0;
}