#include <bits/stdc++.h>

using namespace std;
deque<int>dq;
int n;
int main() {
    cin >> n;
    for(int i = 0; i < n; i++) {
        int a;
        cin >> a;
        dq.push_back(a);
    }
    while(!dq.empty()) {
        cout << dq.front() << " ";
        dq.pop_front();
        dq.push_back(dq.front());
        dq.pop_front();
    }
    return 0;
}