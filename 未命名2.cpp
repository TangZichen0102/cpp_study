#include <bits/stdc++.h>

using namespace std;
int n;
int a[1000001];
int maxn = -10;
int main() {
    cin >> n;
    for(int i = 0; i < n; i++) cin >> a[i];
    for(int i = 0; i < n; i++) {
    	for(int j = 0; j < n - i; j++) {
			int sum = 0;
    		sum += a[i + j];
    		if(sum % 7 == 0 && j >= maxn) maxn = j;
    	}
	}
	cout << (maxn == -10 ? 0 : maxn);
    return 0;
}
