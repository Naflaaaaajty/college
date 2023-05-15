#include<iostream>

#include<cmath>

using namespace std;
int main()
{
    float a, b;
    int  v, t;
    cin >> a >> b;
    t = ceil(a / b);
    if (a > 24 * 60)
        a -= 24 * 60;
    v = t / 60;
    t %= 60;
    if (v > 7)
        v = 24 + 7 - v;
    else
        v = 7 - v;
    printf("%02d:%d", 8 - v - 1, 60 - t - 10);
    return 0;
}