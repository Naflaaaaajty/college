#include<iostream>
using std::cout;
using std::cin;
using std::endl;
namespace classs{
	int rand ;
	void swap(int& a, int& b)
	{
		int c = b;
		b = a;
		a = c;
	}
	int& add(int a=1, int b=1) {
		int c = a + b;
		 return c;
	}
		

}
//using namespace std;
//class  Queue{
//public:
//	Queue() 
//	{
//		a = 1;
//		b = 2;
//		c = 3;
//	}
//	Queue(int _a1,int _b1=2)
//	{
//		a = _a1;
//		b = _b1;
//		c = 3;
//	}
//	int a;
//	int b;
//	int c;
//
//
//};
//int main()
//{
//	/*Queue q1;*/
//	Queue q1(5,5);
//	cout << q1.a<<q1.b << endl;
//	return 0;
//}
int main()
{
	classs::rand = 100;
	cout << classs::rand << endl;
	int a = 100, b = 40;
	classs::swap(a, b);
	cout << a << b << endl;
	int c = classs::add();
	printf("dajhbdhjabd");

	cout << c << endl;
	return 0;
}