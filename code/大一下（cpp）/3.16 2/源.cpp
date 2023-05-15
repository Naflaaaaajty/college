#include<iostream>
#include<string>

using namespace std;
int main()
{
	bool flag = true;
	string s;
	getline(cin, s);
	for (int i = 0; i < s.length(); i++)
	{
		if (s[i] != ' ')
		{
			cout << s[i];
			flag = true;
		}
		else if (flag == true)
		{
			cout << ' ';
			flag = false;
		}
	}
	return 0;
}