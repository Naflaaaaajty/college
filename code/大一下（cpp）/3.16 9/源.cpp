#include<iostream>
#include<string>

using namespace std;
int main()
{
	int a;
	string s, s1;
	cin >> a;
	for (int i = 0; i < a; i++)
	{
		cin >> s >> s1;
		if (s == s1)
		{
		  cout << "Tie"<<"\n";
		  continue;
		}
			
		if (s[0] == 'R' && s1[0] == 'S' || s[0] == 'S' && s1[0] == 'P' || s[0] == 'P' && s1[0] == 'R') 
		{
			printf("Player1\n");
		}
		else 
			printf("Player2\n");
	}
	return 0;
}