#include<bits/stdc++.h>

using namespace std;

const int S=15;
int a[S][S];

void Sxzz(int a[][S],int n)//蛇形矩阵7，8，起点(S-1,S-1) 
{
	int i,j,flag;
	i=j=S-1;
	flag=0;//0斜向上，1斜向下
	for(int x=1;x<=n;x++){
		a[i][j]=x;
		//cout<<x<<' '<<i<<' '<<j<<' '; 
		if(flag==0){
			if(i==0) j--,flag=1;
			else if(j==S-1)
				i--,flag=1;
			else
				i--,j++;
		}
		else{
			if(j==0) i--,flag=0;
			else if(i==S-1)
				j--,flag=0;
			else
				i++,j--;
		}
		//cout<<i<<' '<<j<<endl;
	}
}
void Output(int a[S][S])
{
	for(int i=0;i<S;i++){
		for(int j=0;j<S;j++) printf("%-6d",a[i][j]);
		printf("\n");
	}
}

int main()
{
	int n=S*S;
	Sxzz(a,n);
	Output(a);
	return 0;
}
