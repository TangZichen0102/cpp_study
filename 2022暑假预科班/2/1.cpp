#include <bits/stdc++.h>

using namespace std;
char c[3][3];
int sum = 0, sum2 = 0;
void fun1() {
    if(c[0][0] == c[0][1] && c[0][1] == c[0][2]) sum++;
    if(c[1][0] == c[1][1] && c[1][1] == c[1][2]) sum++;
    if(c[2][0] == c[2][1] && c[2][1] == c[2][2]) sum++;
}

void fun2() {
    if(c[0][0] == c[1][0] && c[1][0] == c[2][0]) sum++;
    if(c[0][1] == c[1][1] && c[1][1] == c[2][1]) sum++;
    if(c[0][2] == c[1][2] && c[1][2] == c[2][2]) sum++;
}

void fun3() {
    if(c[0][0] == c[1][1] && c[1][1] == c[2][2]) sum++;
    if(c[0][2] == c[1][1] && c[1][1] == c[2][0]) sum++;
}

void fun4() {
    set<char> s;
    s.insert(c[0][0]);
    s.insert(c[0][1]);
    s.insert(c[0][2]);
    if(s.size() == 2) sum2++;
    set<char> s2;
    s2.insert(c[1][0]);
    s2.insert(c[1][1]);
    s2.insert(c[1][2]);
    if(s2.size() == 2) sum2++;
    set<char> s3;
    s3.insert(c[2][0]);
    s3.insert(c[2][1]);
    s3.insert(c[2][2]);
    if(s3.size() == 2) sum2++;
}

void fun5() {
    set<char> s;
    s.insert(c[0][0]);
    s.insert(c[1][0]);
    s.insert(c[2][0]);
    if(s.size() == 2) sum2++;
    set<char> s2;
    s2.insert(c[0][1]);
    s2.insert(c[1][1]);
    s2.insert(c[2][1]);
    if(s2.size() == 2) sum2++;
    set<char> s3;
    s3.insert(c[0][2]);
    s3.insert(c[1][2]);
    s3.insert(c[2][2]);
    if(s3.size() == 2) sum2++;
}

void fun6() {
    set<int> s;
    s.insert(c[0][0]);
    s.insert(c[1][1]);
    s.insert(c[2][2]);
    if(s.size() == 2) sum2++;
    set<int> s2;
    s2.insert(c[0][2]);
    s2.insert(c[1][1]);
    s2.insert(c[2][0]);
    if(s2.size() == 2) sum2++;
}

void Fun() {
    fun1();
    fun2();
    fun3();
    fun4();
    fun5();
    fun6();
    cout << sum << endl << sum2;
}
int main() {
#ifndef ONLINE_JUDGE
    freopen("1.in", "r", stdin);
#endif
    for(int i = 0; i < 3; i++)
        for(int j = 0; j < 3; j++) cin >> c[i][j];
    Fun();
    return 0;
}