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

int main()
{
	int x,y;
	cin>>x>>y;
	
	if(x*y < 0)  //异号 
		cout<<"-";
		
	x=abs(x);
	y=abs(y);
	if(x%y==0)  //x是y的整倍数 
	{
		cout<<x/y;
		return 0;
	}
	
	
	vector<int> r,q;
	int flag=-1;
	
	cout<<x/y<<".";
	if(x<y)
		r.push_back(-1);
	else
		r.push_back(x%y);
	x%=y,x*=10;
	while(flag==-1)
	{
		if(x%y == 0)	{flag=-2; break;}  //有限小数 
		if(Search(r,x%y) != -1)	{flag=Search(r,x%y); break;}  //找到了循环节 
		
		q.push_back(x/y);  //放商
		//放余数 
		if(x<y)
			r.push_back(-1);
		else
			r.push_back(x%y);
		//更新被除数和除数 
		x%=y,x*=10;
	}
	
	if(flag == -2)  //有限小数
		Output(q);
	else
	{
		for(int i=0;i<flag-1;i++)  //不循环部分 
			cout<<q[i];
		cout<<"(";
		for(int i=flag-1;i<q.size();i++)  //循环部分 
			cout<<q[i];
		cout<<")";
	}
	
	return 0;
}
