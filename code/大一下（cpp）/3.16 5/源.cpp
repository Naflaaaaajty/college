#include<iostream>
using namespace std;
struct name {
	string student;
	int score, sum2;
	char well, west;
	int cla;
	int mon;
}stu[110];
int main() {
	int n;
	cin >> n;
	int cnt, sum = 0, maxn = -1;
	for (int i = 0; i < n; i++) {
		cin >> stu[i].student >> stu[i].score >> stu[i].sum2 >> stu[i].well >> stu[i].west >> stu[i].cla;
		if (stu[i].score > 80 && stu[i].cla >= 1) {
			stu[i].mon += 8000;
		}
		if (stu[i].score > 85 && stu[i].sum2 > 80) {
			stu[i].mon += 4000;
		}
		if (stu[i].score > 90) {
			stu[i].mon += 2000;
		}
		if (stu[i].score > 85 && stu[i].west == 'Y') {
			stu[i].mon += 1000;
		}
		if (stu[i].sum2 > 80 && stu[i].well == 'Y') {
			stu[i].mon += 850;
		}
		sum += stu[i].mon;
		if (stu[i].mon > maxn) {
			maxn = stu[i].mon;
			cnt = i;
		}
	}
	cout << stu[cnt].student << endl << stu[cnt].mon << endl << sum;
}