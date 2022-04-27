#include<bits/stdc++.h>

using namespace std;

namespace FastIO {
	struct instream {
		int base = 10;
		
		friend instream &operator>>(instream &in, int &num) {
			int flag = 1;
			int ans = 0;
			char ch = getchar();
			while (ch < '0' || ch > '9') {
				if (ch == '-') {
					flag = -flag;
				}
				ch = getchar();
			}
			
			while (ch >= '0' && ch <= '9') {
				ans = ans * in.base + (ch - '0');
				ch = getchar();
			}
			num = ans * flag;
			return in;
		}
	} fin;
}

const int MAXN = 1e6 + 5;

struct node {
	int x, y;
	
	bool operator<(const node &a) {
		return x < a.x;
	}
} a[MAXN];

int f[MAXN];

using namespace FastIO;

int n;

int LIS1() {
	for (int i = 0; i < n; ++i) {
		f[i] = 1;
		for (int j = 0; j < i; ++j) {
			if (a[i].y > a[j].y) {
				f[i] = max(f[i], f[j] + 1);
			}
		}
	}
	int ans = 0;
	for (int i = 0; i < n; ++i) {
		ans = max(ans, f[i]);
	}
}

int LIS2() {
	vector<int> q;
	for (int i = 0; i < n; ++i) {
		int val = a[i].y;
		if (q.empty() || q.back() < val) {
			q.push_back(val);
		} else {
			auto it = lower_bound(q.begin(), q.end(), val);
			*it = val;
		}
	}
	return q.size();
}


int main() {
	fin >> n;
	for (int i = 0; i < n; ++i) {
		fin >> a[i].x >> a[i].y;
	}
	sort(a, a + n);
	cout << LIS2() << endl;
	return 0;
}
