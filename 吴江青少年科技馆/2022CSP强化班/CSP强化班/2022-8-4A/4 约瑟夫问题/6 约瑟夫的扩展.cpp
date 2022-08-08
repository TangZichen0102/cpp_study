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
第8个： 8 9                     7 4 2 1 3 6 10 5
第9个： 9                       7 4 2 1 3 6 10 5 8
*/
void Output(vector<int> &L) 
{
	vector<int>::iterator it;
	for(it=L.begin(); it!=L.end(); it++)
		cout<<*it<<"  ";
	cout<<endl;	
}

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

vector<int>  Joseph(int n,  int ks[],int kn)
{
	vector<int> ans(n);
	list<int> L;
	for(int x=1; x<=n; x++)
		L.push_back(x);
	// 出n次圈
	list<int>::iterator it=L.begin();
	for(int i=0; i<n; i++) 
	{
		// it前进，数k-1个数		
		for(int j=0; j<ks[i%kn]-1; j++)   
		{
			it++;
			if(it==L.end())	it=L.begin();
		}
		ans[i] = *it;  // 保存结果 
		// 安排下一步
		list<int>::iterator nextit=it; 
		nextit++;
		if(nextit==L.end())	nextit=L.begin();
		// 删除 *it 
		L.erase(it);   // 删掉了*it   
		it=nextit;
	}
	return ans;
}

int main()
{
	int n=10;
	int ks[]={7,5,3,6}, kn=4; 
	vector<int> ans=Joseph(n, ks,kn);
	Output(ans);
	return 0;
}

