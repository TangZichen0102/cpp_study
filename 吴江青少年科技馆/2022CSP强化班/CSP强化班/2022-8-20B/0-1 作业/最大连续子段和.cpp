#include <bits/stdc++.h>
using namespace std;
int GetMax(int a[],int n,int &si,int &ei){
	int sum=0,maxsum=1-INT_MAX;
	int start=0;
	for(int i=0;i<n;i++){
		if(sum<0){	
			start=i;	
			sum=a[i];
		}else
			sum+=a[i];
		if(sum>maxsum){
			si=start;
			ei=i;
			maxsum=sum;
		}
	}
	return maxsum;
}
int main(){
	int a[]={5,-6,7,-3,4,8,-9,10,1,2},n=10;
	int si,ei;
	int maxsum=GetMax(a,n,si,ei);
	cout<<si<<" "<<ei<<endl;
	cout<<maxsum<<endl;
	return 0;
}
