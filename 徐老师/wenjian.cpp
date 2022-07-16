#include <bits/stdc++.h>

using namespace std;
int n;
float m;
int main() {
	cin >> n >> m;
	m /= pow(2, n);
	printf("%.2f", m);
    return 0;
}