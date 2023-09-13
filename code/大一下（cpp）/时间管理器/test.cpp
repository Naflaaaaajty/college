#include"Date.h"
bool Date::operator<(const Date & x) const
{
	if (_year < x._year)
	{
		return true;
	}
	else if (_year > x._year)
	{
		return false;
	}
	else if (_month < x._month)
	{
		return true;
	}
	else if (_month > x._month)
	{
		return false;
	}
	else if (_day < x._day)
		return true;
	else
		return false;
}
Date::Date(int year, int month, int day)
{
	_year = year;
	_month = month;
	_day = day;
}
bool Date::operator>=(const Date& x) const
{
	return !(*this<x);
}
void Date::DatePrint()
{
	cout << _year <<"-" << _month <<"-" << _day << endl;
}
bool Date::operator==(const Date& x) const
{
	if (_year == x._year && _month == x._month && _day == x._day)
		return true;
	else
		return false;
}
bool Date::operator>(const Date& x) const
{
	if (*this == x)
		return false;
	return !(*this < x);
}
bool Date::operator<=(const Date& x) const
{
	if (*this == x&&*this<x)
		return true;

}
bool Date::operator!=(const Date& x) const
{
	return !(*this==x);
}
int Date::GetMonthDay(int year, int month)
{
	//static int a1[13] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
	//static int a2[13] = { 0,31,29,31,30,31,30,31,31,30,31,30,31 };
	//if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
	//	return a1[month];
	//else
	//	return a2[month];
	static int daysArr[13] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	if (month == 2 && ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)))
	{
		return 29;
	}
	else
	{
		return daysArr[month];
	}
}
Date& Date::operator+=(int day)
{
	_day += day;
	while (_day>GetMonthDay(_year,_month))
	{
		_day -= GetMonthDay(_year, _month);
		_month++;
		if (_month == 13)
		{
			_year++;
			_month = 1;
		}
	}
	return *this;
}
void Date::operator=(const Date& x)
{
	_year = x._year;
	_month = x._month;
	_day = x._day;
}
Date Date::operator+(int day)
{
	Date tmp(*this);
	tmp += day;
	return tmp;
}
Date& Date::operator-=(int day)
{
	_day -= day;
	while (_day <= 0)
	{
		--_month;
		if (_month == 0)
		{
			--_year;
			_month = 12;
		}
		_day += GetMonthDay(_year, _month);

	}
	return *this;
}
Date Date::operator-(int day)
{
	Date tmp = *this;
	tmp -= day;
	return tmp;
}


int Date::operator-(Date& d)
{
	Date max = *this;
	Date min = d;
	int flag = 1,count=0;
	if (max < min)
	{
		flag = -1;
		max = d;
		min = *this;
	}
	while (min != max)
	{
		++min;
		++count;
	}
	return flag*count;

}


Date& Date::operator++()
{
	*this += 1;
	return *this;
}
Date Date::operator++(int)
{
	Date tmp = *this;
	*this += 1;
	return tmp;
}
Date& Date::operator--()
{
	*this-= 1;
	return *this;
}
Date Date::operator--(int)
{
	Date tmp = *this;
	*this -= 1;
	return tmp;
}
ostream& operator<<(ostream& out, const Date& d)
{
	out << d._year << "年" << d._month << "月" << d._day << "日" << endl;

	return out;
}
istream& operator>>(istream& in, Date& d)
{
	int year, month, day;
	in >> year >> month >> day;

	if (month > 0 && month < 13
		&& day > 0 && day <= d.GetMonthDay(year, month))
	{
		d._year = year;
		d._month = month;
		d._day = day;
	}
	else
	{
		cout << "非法日期" << endl;
		assert(false);
	}

	return in;
}




























