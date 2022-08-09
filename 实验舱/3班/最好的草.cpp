#include<bits/stdc++.h>

using namespace std;

char arr[105][105];

int main()
{
    int r, c, ans = 0;
	cin >> r >> c;
	for (int i = 0; i < r; i++) {
		for (int j = 0; j < c; j++) {
			cin >> arr[i][j];
			if (arr[i][j] == '#' && arr[i][j + 1] != '#' && arr[i][j - 1] != '#' && arr[i + 1][j]  != '#' && arr[i - 1][j] != '#') {
				ans++;
			} 
		}
	} 
	cout << ans;
    return 0;
}

// 5 6
// .#....
// ..#...
// ..#..#
// ...##.
// .#....