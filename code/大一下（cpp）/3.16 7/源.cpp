#include<iostream>
#include<string>

using namespace std;
int main()
{
	char abb[20];
	string s;
	getline(cin, s);
	int arr[100] = { 0 };
	for (int i = 0; i < s.length(); i++)
	{
		arr[s[i] - 97]++;
	}
	for (int i = 0; i < 26; i++)
	{
		if (arr[i] == 1)
			abb[i] = i + 97;
	}
	for (int i = 0; i < s.length(); i++)
	{
		for (int j = 0; j < 20; j++)
		{
			if (abb[j] == s[i])
			{
			   cout << s[i];
			   goto final;
			}	
		}
	}
	final:
	return 0;
}