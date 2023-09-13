#include<iostream>
using namespace std;
int main()
{
	//class Date
	//{
	//public:
	//	

	//private: 
	//	int _year=1;
	//	int _month;
	//	int _day;

	//};
	//Date d1;
	class A
	{
	public:
		A(int a,int b)
			:_a(a)
			,_b(b)
		{}
	private:
		int _a;
		int _b;
	};
	class B
	{
	public:
		B(int a, int ref)
			:_aobj()
			,_ref(ref)
			,_n(10)
		{}
	private:
		A _aobj;
		int& _ref;
		const int _n;

	};
	B bb(1,2);



	A aa;
	return 0;
}
