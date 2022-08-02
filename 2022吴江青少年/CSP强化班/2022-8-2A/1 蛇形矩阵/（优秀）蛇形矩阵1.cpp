#include<bits/stdc++.h>

using namespace std;

const int S=15;
int a[S][S];

void Sxzz(int a[][S],int n)//蛇形矩阵1，2，起点(0,0) 
{
	int i,j,flag;
	i=j=0;
	flag=1;//0斜向上，1斜向下
	for(int x=1;x<=n;x++)
	{
		a[i][j]=x;
		//cout<<x<<' '<<i<<' '<<j<<' '; 
		if(flag==0)
		{
			if(j==S-1) 
				i++,flag=1;  // 右边界上向下一步 
			else 
				if(i==0)
					j++,flag=1;  // 上边界上向右一步 
				else
					i--,j++;    // 右上方向 
		}
		else
		{
			if(i==S-1) 
				j++,flag=0;  // 下边界向右一步 
			else 
				if(j==0)
					i++,flag=0; // 左边界向下一步
				else
					i++,j--;    // 左下方向 
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
