#include<iostream>
using namespace std;
namespace Date 
{

}
int main()
{
	class Date
	{
	public:
		Date(int year = 1, int month = 1, int day = 1)
		{
			_year = year;
			_month = month;
			_day = day;
		}
		bool operator>(const Date& x)
		{
			cout << "yes";
			return true;
		}




	private:
		int _year;
		int _month;
		int _day;
	};

	Date d1(2023, 1, 1);
	Date d2(2023, 1, 1);
	d1.operator> (d2);



	return 0;
}