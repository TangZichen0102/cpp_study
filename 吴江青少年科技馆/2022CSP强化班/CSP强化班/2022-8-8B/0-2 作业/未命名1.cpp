#include<iostream>
using namespace std;
int ANS[1000];
int R[1000];
void Div(int x,int y)
{
	if(y==0)
		return;
	for(int i=0;i<y;i++)
		R[i]=-1;
	int len=0;
	ANS[len]=x/y;
	x=x%y;
	while(x!=0&&R[x]<0)
	{
		R[x]=len;
		x*=10;
		ANS[++len]=x/y;
		x=x%y;	
	}
	if(x==0)
	{
		cout<<ANS[0]<<".";
		for(int i=1;i<=len;i++)
			cout<<ANS[i];
	}else
	{
		cout<<0<<".";
		for(int i=1;i<=len;i++)
		{
			if(i==R[x]+1)
				cout<<"(";
			cout<<ANS[i];
		}
		cout<<")";
	}
}
int main()
{
	int a,b,c,d;
	cin>>a>>b>>c>>d; 
	Div(a,b);
	cout<<endl;
	Div(c,d);
	return 0;
}
