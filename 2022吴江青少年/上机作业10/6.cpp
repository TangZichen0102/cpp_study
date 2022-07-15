#include <bits/stdc++.h>

using namespace std;
int sum1, sum2;
int n, na, nb;
char NA[105];
char NB[105];
int main() {
	cin >> n >> na >> nb;
	for(int i = 0; i < na; i++) cin >> NA[i];
	for(int i = 0; i < nb; i++) cin >> NB[i];
	for(int i = 0; i < n; i++) {
		if(NA[na % i] == 'R') {
			if(NB[nb % i] == 'S') sum1++;
			else if(NB[nb % i] == 'P') sum2++;
		}
		else if(NA[na % i] == 'S') {
			if(NB[nb % i] == 'R') sum2++;
			else if(NB[nb % i] == 'P') sum1++;
		}
		else {
			if(NB[nb % i] == 'R') sum1++;
			else if(NB[nb % i] == 'S') sum2++;
		}
	}
	if(sum1 > sum2) cout << "A";
	else if(sum1 < sum2) cout << "B";
	else cout << "T";
	return 0;
}
