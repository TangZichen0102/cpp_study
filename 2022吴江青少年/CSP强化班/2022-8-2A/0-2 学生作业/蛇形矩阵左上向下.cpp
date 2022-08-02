#include <bits/stdc++.h> 
using namespace std;
int main(){
	int a[100][100],n=10;
	int z=0,j=0; // Î»ÖÃ 
	int k=-1;   // ·½Ïò
	for(int i=0; i<n*n; i++)
	{
		a[z][j]=i;
		switch(k)
		{
			case -1: j++;
					if(j==n-1 || a[z][j+1]!=0)
						k=0;
					break;
			case 0: z++;
					x*=-1;
					k=x;
					break;
			case 1: j--;
					if(j==0||a[z][j-1]!=0){
						k=0;
					}
					break;
		}  
	}
	for(int i=0;i<n;i++){
		for(int i1=0;i1<n;i1++){
		cout<<setw(3)<<a[i][i1];
	}
	cout<<endl;
	}
}
