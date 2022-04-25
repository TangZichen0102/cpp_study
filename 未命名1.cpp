#include <bits/stdc++.h>

using namespace std;
int m, n;
vector<int> v1, v2;
bool c[100001];
int main() {
	cin >> m;
	for(int i = 0; i < m; i++) {
		int _t;
		cin >> _t;
		v1.push_back(_t);
	}
	cin >> n;
	for(int i = 0; i < n; i++) {
		int _t;
		cin >> _t;
		v2.push_back(_t);
	}
	sort(v1.begin(), v1.end());
	sort(v2.begin(), v2.end());
	int sum = 0;
	for(int i = 0; i < n; i++) {
		int minn = 100001;
		for(int j = 0; j < m; j++) {
			if(v2[i] - v1[j] < minn && v2[i] > v1[j] && !c[j]) {
				minn = v2[i] - v1[j];
				cout << v2[i] << " " << v1[j] << endl;
				v2[i] -= v1[j];
				sum++;
				c[i] = true;
			}
//			cout << v2[i] << " " << v1[j] << endl;
		}
	}
	cout << sum;
	return 0;
}
