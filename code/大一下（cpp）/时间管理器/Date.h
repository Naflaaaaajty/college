#pragma once
#include<iostream>
#include<assert.h>
using namespace std;

class Date
{
public:
	//explicit 
	Date(int year = 1, int month = 1, int day = 1);
	void Print()
	{
		cout << _year << "-" << _month << "-" << _day << endl;
	}
	Date(const Date& d)   // 错误写法：编译报错，会引发无穷递归
	{
		_year = d._year;
		_month = d._month;
		_day = d._day;
	}
	void DatePrint();
	bool operator<(const Date& x) const;
	bool operator==(const Date& x) const;
	bool operator<=(const Date& x) const;
	bool operator>(const Date& x) const;
	bool operator>=(const Date& x) const;
	bool operator!=(const Date& x) const;
	static int GetMonthDay(int year, int month);
	// d1 + 100
	Date& operator+=(int day);
	Date operator+(int day);
	Date& operator-=(int day);
	Date operator-(int day);
	int operator-(Date &d);
	Date& operator++();
	Date operator++(int);
	Date& operator--();
	Date operator--(int);
	void operator=(const Date& x);
	friend ostream& operator<<(ostream& out, const Date& d);
	friend istream& operator>>(istream& in, Date& d);
private:
	int _year;
	int _month;
	int _day;
};
ostream& operator<<(ostream& out, const Date& d);
istream& operator>>(istream& in,Date& d);