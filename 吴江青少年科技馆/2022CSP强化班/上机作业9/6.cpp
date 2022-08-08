#include <bits/stdc++.h>

using namespace std;
void people() {
	for(int i = 1450; i <= 1550; i++)
		if(i %3 == 2 && i % 5 == 4 &&i % 7 == 3) cout << i << endl;
}
int main() {
	people();
	return 0;
}
