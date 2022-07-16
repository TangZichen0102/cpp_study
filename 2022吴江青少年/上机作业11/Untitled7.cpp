#include <bits/stdc++.h>

using namespace std;
int n;
int a[105][105];
int main() {
	cin >> n;
	int i, j;
	i = j = n;
	int t = n * n;
	while(t >= 1) {
		while(i == 0 && a[i][j] == 0) { // 上
			a[i][j] = t--;
			i--;
			cout << i << " " << j << endl;
		}
		i++;
		j--;
		cout << endl;
		while(j == 0 && a[i][j] == 0) { // 左
			a[i][j] = t--;
			j--;
			cout << i << " " << j << endl;
		}
		j++;
		i++;
		cout << endl;
		while(i == n && a[i][j] == 0) { // 下
			a[i][j] = t--;
			i++;
			cout << i << " " << j << endl;
		}
		i--;
		j++;
		cout << endl;
		while(j == n && a[i][j] == 0) { // 右
			a[i][j] = t--;
			j++;
			cout << i << " " << j << endl;
		}
		j--;
		i--;
		cout << endl;
	}
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < n; j++) cout << left << setw(5) << a[i][j];
		cout << endl;
	}
	return 0; 
} 
