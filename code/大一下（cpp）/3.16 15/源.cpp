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
//��cppʵ��kmp ����ϸ����
//
//KMP�㷨��һ�ֳ��õ��ַ���ƥ���㷨�����ĺ���˼���������Ѿ�ƥ�������Ϣ�������ܼ���ƥ�������KMP�㷨�ĺ��������next���飬next[i]��ʾģʽ����ǰi���ַ��������ȵ�ǰ׺�ͺ�׺�ĳ��ȡ����������ҽ���C++ʵ��KMP�㷨��������ʵ�ֹ��̽�����ϸ���͡�
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
//����������£�
//
//���ȣ����Ƕ�����һ������getNext�����ڼ���ģʽ��p��next���顣��������һ��ָ��k����ʾģʽ�����Ѿ�ƥ������ǰ׺�ͺ�׺�ĳ��ȡ���s[i] == s[k]ʱ��˵����ģʽ����ǰk���ַ����Ѿ�����һ������Ϊk�����ǰ׺�ͺ�׺�����ǿ�����next[i] = k + 1���������Ǿ���Ҫ��k��ǰ�ƶ���ֱ���ҵ�һ���µ�ǰ׺�ͺ�׺��ȵ�λ�ã���k = next[k]����󣬷���next���顣
//
//Ȼ�����Ƕ�������һ������kmp���������ı���s�в���ģʽ��p���������ȼ����p��next���飬Ȼ��ʹ��ָ��i��j�ֱ��ʾ��ǰ���ı���s��ģʽ��p��ƥ�䵽��λ�á���s[i] == p[j]ʱ��˵��ƥ��ɹ������Ǿ���i��j������ƶ�һλ���������Ǿ���Ҫ����next���齫j��ǰ�ƶ���������j == m��˵��ģʽ��p�Ѿ����ı���s��ƥ��ɹ��ˣ�������λ��i - j����
//
//
//2 / 2
//
//
//
//
//����
//
//��˵��ƥ��ʧ�ܣ����� - 1��
//
//��Ҫע����ǣ�KMP�㷨������֤�ҵ�������̵�ƥ���Ӵ�����ֻ�ǵ�һ��ƥ����Ӵ��������Ҫ�ҵ�����ƥ����Ӵ���������ƥ��ɹ��󣬼������ƥ�䣬ֱ��ƥ��ʧ��Ϊֹ��
//
//�ܽ�һ�£�KMP�㷨��ʱ�临�Ӷ�ΪO(m + n)������m��n�ֱ�Ϊģʽ�����ı����ĳ��ȡ�KMP�㷨�Ŀռ临�Ӷ�ΪO(m)����Ϊ������Ҫ�洢ģʽ����next���顣
//
//ϣ����ݴ���ͽ��Ͷ����а�����