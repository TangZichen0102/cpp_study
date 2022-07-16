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
		if ((NA[i % na] == 'R' && NB[i % nb] == 'S') || (NA[i % na] == 'S' && NB[i % nb] == 'P') || (NA[i % na] == 'P' && NB[i % nb] == 'R')) sum1++;
		else if ((NB[i % nb] == 'R' && NA[i % na] == 'S') || (NB[i % nb] == 'S' && NA[i % na] == 'P') || (NB[i % nb] == 'P' && NA[i % na] == 'R')) sum2++;
	}
	if(sum1 > sum2) cout << "A";
	else if(sum1 < sum2) cout << "B";
	else cout << "T";
	return 0;
}
