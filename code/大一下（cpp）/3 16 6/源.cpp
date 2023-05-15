#include<iostream>
#include<string>

using namespace std;
int main()
{
	int count = 0;
	string s;
	getline(cin, s);
	for (int i = 0; i < s.length(); i++)
	{
		if (s[i] >= '1' && s[i] <= '9')
			count++;
	}
	cout << count;
	return 0;
}