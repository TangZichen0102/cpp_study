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
	
	if(x*y < 0)  //��� 
		cout<<"-";
		
	x=abs(x);
	y=abs(y);
	if(x%y==0)  //x��y�������� 
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
		if(x%y == 0)	{flag=-2; break;}  //����С�� 
		if(Search(r,x%y) != -1)	{flag=Search(r,x%y); break;}  //�ҵ���ѭ���� 
		
		q.push_back(x/y);  //����
		//������ 
		if(x<y)
			r.push_back(-1);
		else
			r.push_back(x%y);
		//���±������ͳ��� 
		x%=y,x*=10;
	}
	
	if(flag == -2)  //����С��
		Output(q);
	else
	{
		for(int i=0;i<flag-1;i++)  //��ѭ������ 
			cout<<q[i];
		cout<<"(";
		for(int i=flag-1;i<q.size();i++)  //ѭ������ 
			cout<<q[i];
		cout<<")";
	}
	
	return 0;
}
