#include<iostream>
using namespace std;
string s1, s2;
int la, lb, lc, lt;
int a[10000], b[10000], c[10000],tmp[100000];
void mymove(int tmp[],int b[],int lb,int &lt,int pos)
{
	for (int i = 1; i <=lb; i++)
	{
		tmp[i + pos - 1] = b[i];
	}
	lt = pos - 1 + lb;
}
int mycmp(int tmp[], int a[], int la, int lt)
{
	if (la > lt)return 1;
	if (la < lt)return -1;
	for (int i = la; i >= 1; i--)
	{
		if(a[i]>tmp[i])return 1;
		if (a[i] < tmp[i])return -1;
	}
	return 0;
}
void strtoint(string s, int* arr)
{
	for (int i = 0; i<s.size(); i++)
	{
		arr[s.size()-i] = s[i] - '0';
	 }
}
void highprecisionsub(int a[], int tmp[], int &la, int lt)
{
	for (int i = 1; i <= lt; i++)
	{
		if (a[i] < tmp[i])
		{
			a[i + 1]--;
			a[i] += 10;
		}
		a[i] -= tmp[i];
	}
	while (a[la] == 0 && la > 1)
		la--;
}

int main()
{
	cin >> s1 >> s2;
	la = s1.size(), lb = s2.size();
	strtoint(s1, a);
	strtoint(s2, b);
	lc = la - lb+1;
	for (int i = lc; i >=1; i--)
	{
		mymove(tmp, b, lb, lt,i);
		while (mycmp(tmp,a,la,lt) >= 0)
		{
		  c[i]++;
		  highprecisionsub(a, tmp, la, lt);
		}
		
	}
	while (c[lc] == 0 && lc > 1)lc--;
	for (int i = lc; i >= 1; i--)cout << c[i];
	cout << endl;
	for (int i = la; i >= 1; i--)cout << a[i];
	return 0;
}