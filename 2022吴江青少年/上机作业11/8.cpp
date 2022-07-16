#include <bits/stdc++.h>

using namespace std;
int n, m, d;
char c[105][105];
void fun(int i, int j) {
	if(c[i][j] == 'R') {
		if(c[i - 1][j] == 'S') c[i - 1][j] = 'R';
		if(c[i + 1][j] == 'S') c[i + 1][j] = 'R';
		if(c[i][j - 1] == 'S') c[i][j - 1] = 'R';
		if(c[i][j + 1] == 'S') c[i][j + 1] = 'R';
	}
	if(c[i][j] == 'S') {
		if(c[i - 1][j] == 'P') c[i - 1][j] = 'S';
		if(c[i + 1][j] == 'P') c[i + 1][j] = 'S';
		if(c[i][j - 1] == 'P') c[i][j - 1] = 'S';
		if(c[i][j + 1] == 'P') c[i][j + 1] = 'S';
	}
	if(c[i][j] = 'P') {
		if(c[i - 1][j] == 'R') c[i - 1][j] = 'P';
		if(c[i + 1][j] == 'R') c[i + 1][j] = 'P';
		if(c[i][j - 1] == 'R') c[i][j - 1] = 'P';
		if(c[i][j + 1] == 'R') c[i][j + 1] = 'P';
	}
}
int main() {
	cin >> n >> m >> d;
	for(int i = 1; i <= n; i++)
		for(int j = 1; j <= m; j++) cin >> c[i][j];
	for(int k = 1; k <= d; k++)
		for(int i = 1; i <= n; i++)
			for(int j = 1; j <= m; j++) fun(i, j);
	for(int i = 1; i <= n; i++) {
		for(int j = 1; j <= m; j++) cout << c[i][j] << " ";
		cout << endl;
	}
	return 0; 
} 
