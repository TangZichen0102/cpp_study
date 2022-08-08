#include<iostream>
#include<vector>
#include<list>
using namespace std;
/*  n=10  k=7
初始：  1 2 3 4 5 6 7 8 9 10
第1个： 1 2 3 4 5 6 8 9 10      7
第2个： 1 2 3 5 6 8 9 10        7 4
第3个： 1 3 5 6 8 9 10          7 4 2
第4个： 3 5 6 8 9 10            7 4 2 1           头删除 
第5个： 5 6 8 9 10              7 4 2 1 3
第6个： 5 8 9 10                7 4 2 1 3 6
第7个： 5 8 9                   7 4 2 1 3 6 10    尾删除 
*/
void Output(list<int> &L) 
{
	list<int>::iterator it;
	for(it=L.begin(); it!=L.end(); it++)
		cout<<*it<<"  ";
	cout<<endl;	
}
// 循环数m个数 
void Output(list<int> &L, int m) 
{
	list<int>::iterator it=L.begin();
	for(int i=0; i<m; i++)   
	{
		cout<<*it<<"  ";
		it++;
		if(it==L.end())
			it=L.begin();
	}
	cout<<endl;	
}

void Joseph(int n,int k)
{
	list<int> L;
	for(int x=1; x<=n; x++)
		L.push_back(x);
	// 出n次圈
	list<int>::iterator it=L.begin();
	for(int i=0; i<n; i++) 
	{
		// it前进，数k-1个数		
		for(int j=0; j<k-1; j++)   
		{
			it++;
			if(it==L.end())	it=L.begin();
		}
		cout<<*it<<"  ";
		// 删除 *it 
		L.erase(it);   // 删掉了*it 
		it++;          //  it已经无效！！！！ 
	}
}

int main()
{
	int n=10,k=7; 
	Joseph(n,k);
	return 0;
}

