#include <bits/stdc++.h> 

using namespace std;
int n;
string s[10001];
int main(){
	double x1, y1, x2, y2;
	cin >> n;
	for(int i = 1; i <= n; i++) {
		getline(cin, s[i]);
		int flag = 0;
		for(int j = 1; j <= n; j++)
			if(s[i][j] == 'x') {
				x1 = i, y1 = j;
				flag++;
				break;
			}
		if(flag) break;
	}
	for(int i = 1; i <= n; i++) {
		int flag = 0;
		for(int j = 1; j <= n; j++)
			if(s[i][j] == 'x') {
				x2 = i, y2 = j;
				flag++;
				break;
		}
		if(flag) break;
	}
	double k, b;
	k = (y2 - y1) / (x2 - x1);
	b = (y2 * x1 - y1 * x2) / (x1 - x2);
	if(b != 0){
		if(b > 0) printf("y=%.4fx+%.4f", k, b);
		else if(b < 0) printf("y=%.4fx%.4f", k, b);
	}
	else printf("y=%.4fx", b);
	return 0;
}
