#include<iostream>
#include<string>

using namespace std;
int main()
{
	string s;
	
	cin >> s;
	char c = s[0];
	for (int i = 0; i < s.length() - 1; i++)
	{
		s[i] += s[i + 1];
	}
	s[s.length() - 1] += c;
	cout << s;
	return 0;
}