#include<bits/stdc++.h>
using namespace std;
#define N 8
int sum=0;
void Output(int pos[]){
    for(int i=0;i<N;i++){ 
        for(int j=0;j<N;j++)
            if(pos[i]==j)
            	cout<<"X ";
            else
            	cout<<"0 ";
        cout<<endl; 
    }
    cout<<endl;
}
bool pd(int pos[],int ith,int k){//判断第k行是否合法的位置 
	for(int i=0;i<ith;i++)//遍历第0-ith-1个皇后的位置 
		if(pos[i]==k||pos[i]-i==k-ith||pos[i]+i==k+ith)//不能在同一行或对角线上,行列之差相同的左对角线重合,行列之和相同的右对角线重合 
			return false;
	return true;
}
void Solve(int pos[],int ith){//正在决策第ith个皇后在第几行 
	if(ith==8){ 
		Output(pos);
		sum++;
	}else{
		for(int i=0;i<N;i++){
			if(pd(pos,ith,i)){
				pos[ith]=i;//标记第ith个皇后在第i行 
				Solve(pos,ith+1);
			}
		}
	}
}
int main(){
	int pos[N]={0};//每个皇后必定各占一列,数组记录每个皇后在第几行 
	Solve(pos,0);
	cout<<"总共"<<sum<<"种摆放法";
	return 0;
}
