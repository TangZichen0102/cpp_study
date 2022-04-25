#include<bits/stdc++.h>

using namespace std;

int main() {
    for(int i = 100; i <= 333; i++) {
    	string s1 = to_string(i);
    	string s2 = to_string(i * 2);
    	string s3 = to_string(i * 3);
		int flag1 = 0;
    	for(int j = 0; j < 3; j++) {
    		flag1 = 0;
    		for(int k = 0; k < 3; k++)
    			if(s1[j] == s2[k]) {
    				flag1 = 1;
    				break;
				}
			if(flag1) break;
		}
		if(flag1) continue;
		for(int j = 0; j < 3; j++) {
    		flag1 = 0;
    		for(int k = 0; k < 3; k++)
    			if(s2[j] == s3[k]) {
    				flag1 = 1;
    				break;
				}
			if(flag1) break;
		}
		if(flag1) continue;
		for(int j = 0; j < 3; j++) {
    		flag1 = 0;
    		for(int k = 0; k < 3; k++)
    			if(s1[j] == s3[k]) {
    				flag1 = 1;
    				break;
				}
			if(flag1) break;
		}
		if(flag1) continue;
		if(s1[0] == s1[1] || s1[1] == s1[2] || s1[0] == s1[2] || 
		   s2[0] == s2[1] || s2[1] == s2[2] || s2[0] == s2[2] || 
		   s3[0] == s3[1] || s3[1] == s3[2] || s3[0] == s3[2]) continue;
		cout << s1 << " " << s2 << " " << s3 << endl;
	}
    return 0;
}
