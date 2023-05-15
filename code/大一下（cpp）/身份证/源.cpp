#include<iostream>
#include<cmath>

using namespace std;
int main()
{
	char arr[20] = { 0 };
	cin >> arr;
	//int a = arr[6] * pow(10, 3) + arr[7] * pow(10, 2) + arr[8] * 10 + arr[9];
	cout << "出生年份" << arr[6] << arr[7] << arr[8] << arr[9] << endl;
	cout << "月" << arr[10] << arr[11] << endl;
	cout << "日" << arr[12] << arr[13] << endl;

	return 0;
}