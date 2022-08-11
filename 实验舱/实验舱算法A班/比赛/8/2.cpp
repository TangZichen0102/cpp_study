#include <bits/stdc++.h>

using namespace std;
int n;
stack<int> A, B;
int main() {
    cin >> n;
    for(int i = 0; i < n; i++) {
        string s;
        cin >> s;
        if(s == "push") {
            char c;
            int d;
            cin >> c >> d;
            if(c == 'A') A.push(d);
            else B.push(d);
        }
        else if(s == "pop") {
            char c;
            cin >> c;
            if(c == 'A') {
                cout << A.top();
                A.pop();
            }
            else {
                cout << B.top();
                B.pop();
            }
        }
        else {
            char c1, c2;
            if(c1 == 'A') {
                while(!B.empty()) {
                    int d = B.top();
                    B.pop();
                    A.push(d);
                }
            }
            else {
                while(!A.empty()) {
                    int d = A.top();
                    A.pop();
                    B.push(d);
                }
            }
        }
    }
    return 0;
}