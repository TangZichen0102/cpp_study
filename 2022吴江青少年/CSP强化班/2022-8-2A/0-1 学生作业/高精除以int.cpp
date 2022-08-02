#include<bits/stdc++.h>

using namespace std;

struct BigNum{
	int a[100005];
	int n;
};

void StoI(BigNum &k,string s)
{
	for(int i=0;i<s.size();i++)
		k.a[i]=s[i]-'0';
	k.n=s.size();
}
int gjd_cf(BigNum &k1,int k)
{
	int sum=0;
	int i=0;
	while(i<k1.n){
		while(sum<k&&i<k1.n) sum=sum*10+k1.a[i++];
		if(sum>=k){
			cout<<sum/k;
			sum%=k;
		} 
	}
	cout<<"бнбн"<<sum; 
	return sum;
}
int main()
{
	int k;
	BigNum k1;
	string s1;
	cin>>s1;
	cin>>k;
	StoI(k1,s1);
	int ys=gjd_cf(k1,k);
	return 0;
}
