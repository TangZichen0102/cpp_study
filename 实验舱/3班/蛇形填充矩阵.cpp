#include<bits/stdc++.h>

using namespace std;
int a[101][101];

int main() {
    int n, cnt = 1;
    int sumLine = 1 + 1; //��һ��ĶԽ��ߺ�
    cin >> n;
    for (int k = 1; k <= n; ++k) {   //�ϰ벿����n��
        if (sumLine % 2 == 0)
            for (int i = 1; i <= k; ++i) a[sumLine - i][i] = cnt++;
        else
            for (int i = 1; i <= k; ++i) a[i][sumLine - i] = cnt++;
        sumLine++; // ��һ���Խ��ߺ�����һ��+1
    }
    for (int k = 2; k <= n; ++k) {   //�°벿����n-1��  ,�±���2--n
        if (sumLine % 2 == 0)
            for (int i = k; i <= n; ++i) a[sumLine - i][i] = cnt++;
        else
            for (int i = k; i <= n; ++i) a[i][sumLine - i] = cnt++;
        sumLine++;
    }
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= n; ++j)
            cout << setw(4) << a[i][j];
        cout << endl;
    }
    return 0;
}
