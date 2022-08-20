#include <bits/stdc++.h>
using namespace std;
int BinSearch(vector<int> &a,int x){//从左向右寻找第一个小于x的数 
	int left=0,right=a.size()-1;
	while(left<right){
		int mid=(left+right)/2;
		if(a[mid]>=x)
			left=mid+1;
		else	
			right=mid;
	}
	return left;
} 
int main(){
	int len=0;
	vector<int> v; 
	string s;getline(cin,s);
	istringstream sin(s);
	while(!sin.eof()){
		int x;sin>>x;
		v.push_back(x); //读入数据 
	}
	vector<int> LDS;//最长不递增子序列 
	LDS.push_back(v[0]);len++; 
	for(int i=1;i<v.size();i++){
		if(v[i]<=LDS.back()){
			LDS.push_back(v[i]);
			len++;
		}else{
			int k=BinSearch(LDS,v[i]);
			LDS[k]=v[i];
		}
	}		
	cout<<len<<endl;
	len=0;
	vector<int> LIS;//最长递增子序列 
	LIS.push_back(v[0]);len++;
	for(int i=1;i<v.size();i++){
		if(v[i]>LIS.back()){
			LIS.push_back(v[i]);
			len++;
		}else{
			int k=lower_bound(LIS.begin(),LIS.end(),v[i])-LIS.begin();
			LIS[k]=v[i];
		}
	}		
	cout<<len<<endl;//一个序列最少的最长不递增子序列数量等于其最长递增子序列的长度
	return 0;
}
