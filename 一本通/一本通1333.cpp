#include <bits/stdc++.h>
using namespace std;
int n, a, cnt2, cnt3, num2, num3, x;
int main() {
	while (cin >> a >> n) {
		queue<int> q2, q3, q; 
		q.push(a);
		int i;
		for (i = 1; i < n; i++) {
			q2.push(q.front()*2+1);
			q3.push(q.front()*3+1);
			if (q2.front() < q3.front()) q.push(q2.front()), q2.pop();
			else if (q2.front() > q3.front()) q.push(q3.front()), q3.pop();
			else q.push(q3.front()), q2.pop(), q3.pop();
			q.pop();
		}
		cout << q.front() << endl;
	}
	return 0;
}