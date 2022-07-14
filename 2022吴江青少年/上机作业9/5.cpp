#include <bits/stdc++.h>

using namespace std;
int pen() {
	int sum = 0;
	for(int i = 0; i <= 300; i++)
		for(int j = 0; j <= 33; j++)
			for(int k = 0; k <= 20; k++)
				if(i + j + k == 100 && i / 3 + j * 3 + k * 5 == 100) sum++;
	return sum;
}
int main() {
	cout << pen();
	return 0;
} 
