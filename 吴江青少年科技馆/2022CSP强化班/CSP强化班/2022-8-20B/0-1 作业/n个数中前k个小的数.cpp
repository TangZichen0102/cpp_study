#include<bits/stdc++.h>
using namespace std;
int main(){
	priority_queue<int,vector<int>,less<int> > Q;
	int n,k;cin>>n>>k;
	int ans=0;//������ans���� 
	for(int i=0;i<n;i++){
		int x;cin>>x;
		if(ans<k){
			Q.push(x);
			ans++;
		}else
			if(x<Q.top()){
				Q.pop();
				Q.push(x);
			}
	}
//	priority_queue<int,vector<int>,greater<int> > q;//���� 
//	while(!Q.empty()){
//		q.push(Q.top());
//		Q.pop();
//	}
	while(!Q.empty()){
		cout<<Q.top()<<" ";
		Q.pop();
	}
}
