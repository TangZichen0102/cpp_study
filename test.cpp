#include <bits/stdc++.h>

using namespace std;
priority_queue<int, vector<int>, greater<int>> q;
int main() {
    int n;
    scanf("%d", &n);
    int t;
    for (int i = 0; i < n; i++) {
        scanf("%d", &t);
        q.push(t);
    }
    int t1, t2, sum, temp = 0;
    while (q.size() != 1) {
        t1 = q.top();
        q.pop();
        t2 = q.top();
        q.pop();
        sum = t1 + t2;
        temp += sum;
        q.push(sum);
    }
    printf("%d", temp);
    return 0;
}
