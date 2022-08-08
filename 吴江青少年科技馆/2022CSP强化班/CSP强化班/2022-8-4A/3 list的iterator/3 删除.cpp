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

int main()
{
	int a[]={1,2,3,4,5,6,7,8,9} , n=9;
	list<int> L(a, a+n);
	Output(L);
	L.pop_back();   Output(L);   // 尾删除 
	L.pop_front();  Output(L);   // 头删除
	// 中间删除
	list<int>::iterator it=L.begin();	
	it++;
	L.erase(it);    Output(L);
	L.erase(it);    Output(L);   // it无效，程序提前中断！ 
	return 0;
}




