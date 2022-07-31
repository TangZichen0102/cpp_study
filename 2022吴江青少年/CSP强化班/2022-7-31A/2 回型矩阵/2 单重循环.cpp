#include  <iostream>
#include  <iomanip>
using namespace std;
#define N 10

void Output(int a[][N], int n)
{
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<n; j++)
			cout<<setw(2)<<a[i][j]<<" ";
		cout<<endl;	
	}
}

void HX(int a[][N], int n)
{
	int i=0, j=0;  // 起点
	int flag=0;    // 0东  1南  2西  3北
	for(int x=1; x<=n*n; x++)   //
	{
		a[i][j]=x;
		switch(flag) 
		{
			case 0:	j++;	//东 
					if(j==n-1 || a[i][j+1]!=0)  // 到了右边界 
						flag=1;
			 		break; 
			case 1:	i++;	//南
					if(i==n-1 || a[i+1][j]!=0)  // 到了下边界 
						flag=2;
			 		break; 
			case 2:	j--;	//西 
					if(j==0 || a[i][j-1]!=0)  // 到了左边界 
						flag=3;
			 		break; 
			case 3:	i--;	//北 
					if(i==0 || a[i-1][j]!=0)  // 到了上边界 
						flag=0;
			 		break; 
		}
	}
}

int main()
{
	freopen("out.txt", "w", stdout);
	int n=9;
	int a[N][N]={0};
	HX(a,n);
	Output(a,n);
	return 0;
}





