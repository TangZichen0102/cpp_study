#include<bits/stdc++.h>

using namespace std;

const int S=15;
int a[S][S];

void Sxzz(int a[][S],int n)//���ξ���1��2�����(0,0) 
{
	int i,j,flag;
	i=j=0;
	flag=1;//0б���ϣ�1б����
	for(int x=1;x<=n;x++)
	{
		a[i][j]=x;
		//cout<<x<<' '<<i<<' '<<j<<' '; 
		if(flag==0)
		{
			if(j==S-1) 
				i++,flag=1;  // �ұ߽�������һ�� 
			else 
				if(i==0)
					j++,flag=1;  // �ϱ߽�������һ�� 
				else
					i--,j++;    // ���Ϸ��� 
		}
		else
		{
			if(i==S-1) 
				j++,flag=0;  // �±߽�����һ�� 
			else 
				if(j==0)
					i++,flag=0; // ��߽�����һ��
				else
					i++,j--;    // ���·��� 
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
