#include <bits/stdc++.h>

using namespace std;
int n;
int a[1005];
int sum1, sum2, sum3;
int sum4;
int sum5;
int flag;
int sum1_cnt, sum2_cnt, sum3_cnt, sum4_cnt, sum5_cnt;
void f1(int x) {
    if(x % 2 == 0 && x % 5 == 0) {
        sum1 += x;
        sum1_cnt++;
    }
}
void f2(int x) {
    if(x % 5 == 1) {
        if(flag == 0) {
            sum2 += x;
            flag = 1;
            sum2_cnt++;
        }
        else {
            sum2 -= x;
            flag = 0;
            sum2_cnt++;
        }
    }
}
void f3(int x) {
    if(x % 5 == 2) sum3++;
}
void f4(int x) {
    if(x % 5 == 3) {
        sum4_cnt++;
        sum4 += x;
    }
}
void f5(int x) {
    if(x % 5 == 4) {
        sum5 = max(sum5, x);
        sum5_cnt++;
    }
}
void F(int x) {
    f1(x);
    f2(x);
    f3(x);
    f4(x);
    f5(x);
}
void print() {
    if(sum1_cnt == 0) cout << "N" << " ";
    else cout << sum1 << " ";
    if(sum2_cnt == 0) cout << "N" << " ";
    else cout << sum2 << " ";
    if(sum3 == 0) cout << "N" << " ";
    else cout << sum3 << " ";
    if(sum4_cnt == 0) cout << "N" << " ";
    else printf("%.1f ", (double) (sum4) / sum4_cnt);
    if(sum5_cnt == 0) cout << "N";
    else cout << sum5;
}
int main() {
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> a[i];
        F(a[i]);
    }
    print();
    return 0;
}