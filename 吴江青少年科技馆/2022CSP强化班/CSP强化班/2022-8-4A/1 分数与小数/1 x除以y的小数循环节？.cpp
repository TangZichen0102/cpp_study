#include <bits/stdc++.h>

using namespace std;

void Output(vector<int> &v)
{
	for(int i=0;i<v.size();i++)
		cout<<v[i]<<" ";
	cout<<endl;
}

int Search(vector<int> &v, int x)
{
	for(int i=0;i<v.size();i++)
		if(v[i]==x)
			return i;
	return -1;
}

// 设 x < y 
void Div(int x,int y) 
{
	vector<int> r,q;  // r余数(被除数)向量   q商向量 
	int r1, k; 
	while( 1 )
	{
		x *= 10;  // 被除数 
		int q1=x/y;		r1=x%y;
		if( r1== 0)
			break;  // 有限小数 
		k=Search(r,r1);  
		if(k!= -1)	 
			break;  //找到了循环节 
		q.push_back(q1);  //放商
		r.push_back(r1);  //放余数 
		x=r1;     //更新被除数和除数 
	}
	if(r1==0)  //有限小数
		Output(q);
	else
	{
		for(int i=0; i<k-1;     i++) cout<<q[i]; //不循环部分 
		cout<<"(";
		for(int i=k; i<q.size();i++) cout<<q[i]; //循环部分 
		cout<<")";
	}
}

int main()
{
	int x=-1,y=7;
	cin>>x>>y;
	if(x*y < 0)  //异号 
		cout<<"-";
	x=abs(x);
	y=abs(y);
	if(x%y==0)  //x是y的整倍数 
	{
		cout<<x/y;	return 0;
	}
	
	
	
	return 0;
}
