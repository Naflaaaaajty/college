#include<iostream>
using namespace std;
int main()
{
	int x = 0, n, m = 0, c = 0;		
	for (int x = 1; x <= 12; x++) 
	{
		cin >> n;			
		m = m + 300 - n;			
		c = c + m / 100;			
		m = m % 100;			
		if (m < 0)				
		{
			cout << -x;		
			return 0;
		}
	}
	cout << m + 100 * c * 1.2;		
	return 0;
}
