#include <bits/stdc++.h>
using namespace std;
const int N=4;
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
int GetMax(int a[N][N],int &maxsi,int &maxsj,int &maxei,int &maxej){
	int maxsum=1-INT_MAX;
	for(int si=0;si<N;si++){
		int b[N]={0};
		for(int ei=si;ei<N;ei++){
			for(int j=0;j<N;j++)
				b[j]+=a[ei][j];
			int sj,ej;
			int sum=GetMax(b,N,sj,ej);
			if(sum>maxsum)
				maxsum=sum,maxsi=si,maxei=ei,maxsj=sj,maxej=ej;
		}
	}
	return maxsum;
}
int main(){
	int a[N][N]={
		{0,-2,-7,0},
		{9,2,6,-2},
		{-4,1,-4,1},
		{-1,18,0,-2}
	};
	int si,sj,ei,ej;
	int sum=GetMax(a,si,sj,ei,ej);
	cout<<si<<" "<<ei<<endl<<sj<<" "<<ej<<endl<<sum;
	return 0;
}
