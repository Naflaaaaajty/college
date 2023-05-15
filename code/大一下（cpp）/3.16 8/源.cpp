#include<iostream>
#include<string>

using namespace std;
int main()
{
	double a;
	cin >> a;
	string s, s1;
	cin >> s >> s1;
	int b = s.length();
	double count = 0;
	for (int i = 0; i < b; i++)
	{
		if (s[i] == s1[i])
			count++;
	}
	count /= b;
	if (count >= a)
		cout << "yes";
	else
		cout << "no";
	return 0;
}