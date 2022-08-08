#include<bits/stdc++.h>

using namespace std;

struct BigNum{
	int a[100005];
	int n;
};

void StoI(BigNum &k,string s)
{
	reverse(s.begin(),s.end());
	for(int i=0;i<s.size();i++)
		k.a[i]=s[i]-'0';
	k.n=s.size();
}

int main()
{
	BigNum k1,k2;
	string s1,s2;
	cin>>s1>>s2;
	StoI(k1,s1);StoI(k2,s2);
	if(k1.n>k2.n) cout<<"1";
	else if(k2.n>k1.n) cout<<"2";
	else{
		for(int i=k1.n-1;i>=0;i--){
			if(k1.a[i]>k2.a[i]){
				cout<<"1";
				return 0;
			}
			else if(k1.a[i]<k2.a[i]){
				cout<<"2";
				return 0;
			}
		}
	} 
	return 0;
}
