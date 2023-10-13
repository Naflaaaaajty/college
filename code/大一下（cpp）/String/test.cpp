#include "string.h"
void test()
{
	TY::string s1;
	const TY::string s2 = "hello world";
	//for (auto ch : s2)
	//{
	//	ch++;
	//	cout << ch << " ";
	//}
	//TY::string::const_iterator it = s2.end();
	//cout << it;
	s1.push_back('a');
	s1.push_back('a');
	s1.push_back('a');

	cout << s1[0];
	s1 += "fdafaf";
	s1 += "fdafaf";
	s1.push_back('a');
	s1.push_back('a');
	s1.push_back('a');
	s1.push_back('a');
	s1.push_back('a');
	s1.push_back('a');
	s1.push_back('a');
	s1.push_back('a');
	cout << s1.size();
	cout << strlen(s1.c_str());

}
int main()
{
	test();





	return 0;
}