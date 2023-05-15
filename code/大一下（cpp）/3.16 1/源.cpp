#include<iostream>
#include<string>

using namespace std;
int main()
{
	char a, b;
	string s;
	getline(cin,s);

	cin >> a >> b;
	for (int i = 0; i < s.length(); i++)
	{
		if (s[i] == a)
			s[i] = b;
	}
	cout << s;
	return 0;
}