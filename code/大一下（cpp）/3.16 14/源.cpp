#include <iostream>
#include <string>
using namespace std;
int main()
{
	string s;
	char s1[50] = {0};
	cin >> s;
	for (int i = 0; i < s.length(); i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] -= 32;
		if (s[i] >= 'A' && s[i] <= 'Z')
			s[i] += 32;
	}
	for (int i = 0; i < s.length(); i++)
	{
		s[i] += 3;
	}
	int j = 0;
	for (int i = s.length() - 1; i >= 0; i--)
	{
		s1[j] = s[i];
		j++;
	}
	for (int i = 0; i < s.length(); i++)
	{
		if (s[i] != '0')
			cout << s1[i];
	}
	return 0;
}