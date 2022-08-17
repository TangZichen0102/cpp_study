
#include <bits/stdc++.h>

using namespace std;
int n, m, t;
queue<int> q1, q2;
int main() {
   cin >> n >> m >> t;
   for(int i = 1; i <= n; i++) q1.push(i);
   for(int i = 1; i <= m; i++) q2.push(i);
   for(int i = 1; i <= t; i++) {
      cout << q1.front() << " " << q2.front() << endl;
      q1.push(q1.front());
      q2.push(q2.front());
      q2.pop(), q1.pop();
   }
   return 0;
}