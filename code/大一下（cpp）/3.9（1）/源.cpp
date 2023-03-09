#include<iostream>
#include<cmath>
using namespace std;
typedef struct {
	double x;
	double y;
}xy;
double dis(xy* xy1,xy* xy2) 
{
	return sqrt(pow(xy1->x - xy2->x,2) + pow(xy1->y - xy2->y,2));
}
int main()
{
	xy xy1, xy2, xy3;
	cin >> xy1.x >> xy1.y >> xy2.x >> xy2.y >> xy3.x >> xy3.y;
	printf("%.2lf", dis(&xy1, &xy2)+dis(&xy2, &xy3)+dis(&xy1, &xy3));
	return 0;
}