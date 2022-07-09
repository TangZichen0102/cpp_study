#include <bits/stdc++.h>

using namespace std;
int cnt =1;
int main() {
	int n;
	cin >>n;
    n = n - 1;
	for(int i = n - 1; i >= 0; i--) {
		for(int j = 0; j < i + 1; j++) cout <<" ";
		for(int j = 0; j < cnt; j++) cout << "*";
		cnt += 2;
		cout << endl;
    }
    n = n + 1;
    cnt = 2 * n - 1;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < i; j++) cout << " ";
        for(int j = 0; j < cnt; j++) cout << '*';
        cnt -= 2;
        cout << endl;
    }
	return 0;
} 