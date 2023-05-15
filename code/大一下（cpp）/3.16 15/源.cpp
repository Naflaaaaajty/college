#include <iostream>
#include <vector>
using namespace std;
vector<int> getNext(string s) {
    int n = s.length();
    vector<int> next(n);
    next[0] = -1;
    int k = -1;
    int i = 0;
    while (i < n - 1) {
        if (k == -1 || s[i] == s[k]) {
            i++;
            k++;
            next[i] = k;
        }
        else {
            k = next[k];
        }
    }
    //for (int i = 0; i < n; i++)
    //{
    //    cout<<next[i];
    //}
    return next;
}

int kmp(string s, string p) {
    int n = s.length();
    int m = p.length();
    vector<int> next = getNext(p);
    int i = 0;
    int j = 0;
    while (i < n && j < m) {
        if (j == -1 || s[i] == p[j]) {
            i++;
            j++;
        }
        else {
            j = next[j];
        }
    }
    if (j == m) {
        return i - j;
    }
    else {
        return -1;
    }
}
int main() {
    string s, p;
    cin >> p >> s;
    int pos = kmp(s, p);
    if (pos == -1) {
        cout << "No substring" << endl;
    }
    else {
        cout<<p << " is substring of " << s << endl;
    }
    return 0;
}
//New chat
//
//
//
//用cpp实现kmp 并详细解释
//
//KMP算法是一种常用的字符串匹配算法，它的核心思想是利用已经匹配过的信息，尽可能减少匹配次数。KMP算法的核心是求出next数组，next[i]表示模式串中前i个字符中最长的相等的前缀和后缀的长度。接下来，我将用C++实现KMP算法，并对其实现过程进行详细解释。
//
//cpp
//Copy code
//#include <iostream>
//#include <vector>
//using namespace std;
//
//vector<int> getNext(string s) {
//    int n = s.length();
//    vector<int> next(n);
//    next[0] = -1;
//    int k = -1;
//    int i = 0;
//    while (i < n - 1) {
//        if (k == -1 || s[i] == s[k]) {
//            i++;
//            k++;
//            next[i] = k;
//        }
//        else {
//            k = next[k];
//        }
//    }
//    return next;
//}
//
//int kmp(string s, string p) {
//    int n = s.length();
//    int m = p.length();
//    vector<int> next = getNext(p);
//    int i = 0;
//    int j = 0;
//    while (i < n && j < m) {
//        if (j == -1 || s[i] == p[j]) {
//            i++;
//            j++;
//        }
//        else {
//            j = next[j];
//        }
//    }
//    if (j == m) {
//        return i - j;
//    }
//    else {
//        return -1;
//    }
//}
//
//int main() {
//    string s = "ababcabcacbab";
//    string p = "abcac";
//    int pos = kmp(s, p);
//    if (pos == -1) {
//        cout << "Pattern not found." << endl;
//    }
//    else {
//        cout << "Pattern found at position " << pos << endl;
//    }
//    return 0;
//}
//代码解释如下：
//
//首先，我们定义了一个函数getNext，用于计算模式串p的next数组。我们利用一个指针k来表示模式串中已经匹配过的最长前缀和后缀的长度。当s[i] == s[k]时，说明在模式串的前k个字符中已经有了一个长度为k的相等前缀和后缀，我们可以令next[i] = k + 1。否则，我们就需要将k向前移动，直到找到一个新的前缀和后缀相等的位置，即k = next[k]。最后，返回next数组。
//
//然后，我们定义了另一个函数kmp，用于在文本串s中查找模式串p。我们首先计算出p的next数组，然后使用指针i和j分别表示当前在文本串s和模式串p中匹配到的位置。当s[i] == p[j]时，说明匹配成功，我们就让i和j都向后移动一位。否则，我们就需要根据next数组将j向前移动。最后，如果j == m，说明模式串p已经在文本串s中匹配成功了，返回其位置i - j；否
//
//
//2 / 2
//
//
//
//
//继续
//
//则说明匹配失败，返回 - 1。
//
//需要注意的是，KMP算法并不保证找到的是最短的匹配子串，而只是第一个匹配的子串。如果需要找到所有匹配的子串，可以在匹配成功后，继续向后匹配，直到匹配失败为止。
//
//总结一下，KMP算法的时间复杂度为O(m + n)，其中m和n分别为模式串和文本串的长度。KMP算法的空间复杂度为O(m)，因为我们需要存储模式串的next数组。
//
//希望这份代码和解释对您有帮助！