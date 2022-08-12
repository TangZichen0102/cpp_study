#include <iostream> 
#include <vector> 
#include <stack> 
#include <queue> 
using namespace std;

//  先进先出 
void Test1()
{
	queue<int> Q;
	for(int x=1; x<10; x++)
		Q.push(x);    // 进队列
	while( !Q.empty() )
	{
		int x=Q.front(); Q.pop();   // 取队首   出队列
		cout<<x<<"  ";
	}	
}

void Test2()
{
	vector<int> Q;
	for(int x=1; x<10; x++)
		Q.push_back(x);    // 进队列
	while( !Q.empty() )
	{
		int x=Q.front();  Q.erase(Q.begin());   // 取队首   出队列 
		cout<<x<<"  ";
	}	
}

int main()
{
	Test2();
	return 0;
}

