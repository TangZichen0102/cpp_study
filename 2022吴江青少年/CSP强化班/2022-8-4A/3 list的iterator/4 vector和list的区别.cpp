#include<iostream>
#include<vector>
#include<list>
using namespace std;

void Output(vector<int> &v) 
{
	vector<int>::iterator it;    // 迭代器  安全指针 
	for(it=v.begin(); it!=v.end(); it++)
		cout<<*it<<"  ";
	cout<<endl;	
}
void Output(list<int> &L) 
{
	// L[0];  不能用下标访问数据 
	cout<<L.size()<<endl;
	list<int>::iterator it;    // 迭代器  安全指针 
	for(it=L.begin(); it!=L.end(); it++)
		cout<<*it<<"  ";
	cout<<endl;	
}
//  vector ： 直接读写 
//  list   ： 插入删除，不需要移位 
void  Test1()
{
	int n=100000000;
	vector<int> v;
	for(int x=0; x<n; x++)
		v.push_back(x); 
}
void  Test2()
{
	int n=100000000;
	vector<int> v(n);
	for(int x=0; x<n; x++)
		v[x]=x; 
}
void  Test3()
{
	int n=100000000;
	list<int> L;
	for(int x=0; x<n; x++)
		L.push_back(x); 
}
int main()
{
	//Test1();   // 0.82s 申请了若干次的空间, 1亿次的赋值，若干次的搬迁 
	//Test2();   // 0.51s 申请了1次的空间 , 1亿次的赋值
	//Test3();   // 8.7s  申请了1亿次的空间 , 1亿次的赋值 
	return 0;
}





