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

// �� x < y 
void Div(int x,int y) 
{
	vector<int> r,q;  // r����(������)����   q������ 
	int r1, k; 
	while( 1 )
	{
		x *= 10;  // ������ 
		int q1=x/y;		r1=x%y;
		if( r1== 0)
			break;  // ����С�� 
		k=Search(r,r1);  
		if(k!= -1)	 
			break;  //�ҵ���ѭ���� 
		q.push_back(q1);  //����
		r.push_back(r1);  //������ 
		x=r1;     //���±������ͳ��� 
	}
	if(r1==0)  //����С��
		Output(q);
	else
	{
		for(int i=0; i<k-1;     i++) cout<<q[i]; //��ѭ������ 
		cout<<"(";
		for(int i=k; i<q.size();i++) cout<<q[i]; //ѭ������ 
		cout<<")";
	}
}

int main()
{
	int x=-1,y=7;
	cin>>x>>y;
	if(x*y < 0)  //��� 
		cout<<"-";
	x=abs(x);
	y=abs(y);
	if(x%y==0)  //x��y�������� 
	{
		cout<<x/y;	return 0;
	}
	
	
	
	return 0;
}
