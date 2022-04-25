#include <bits/stdc++.h>

using namespace std;
bool is_prime(int n) {
	for(int i = 2; i * i <= n; i++) 
		if(n % i == 0) return false;
	return true;
}
int main() {
    int n;
    cin >> n;
    for(int i = 2; i <= n; i++)
    	if(is_prime(i))
    		for(int j = 2; j <= n - i; j++)
    			if(is_prime(j))
    				for(int k = 2; k <= n - i - j; k++)
    					if(is_prime(k))
    						if(i + j + k == n) {
    							cout << i << " " << j << " " << k;
    							return 0;
							}
    return 0;
}
