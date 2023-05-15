#include<iostream>
using namespace std;
long long mod[100010] = { 0 }, add[100010] = { 0 };
int main()
{
	int n, k, a;
	long long cnt = 0;
	cin >> n >> k;
	for (int i = 1; i <= n; i++)
	{
		cin >> a;
		mod[i] = (mod[i - 1] + a) % k;
		add[mod[i]]++;
	}
	for (int i = 0; i < n; i++)
	{
		cnt += add[i] * (add[i] - 1) / 2;//ÅÅÁÐ×éºÏ
	}
	cout << cnt + add[0];
	return 0;
}