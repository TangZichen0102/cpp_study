#include <iostream> 
#include <vector> 
#include <stack> 
using namespace std;

void Test1()
{
	stack<int> S;
	for(int x=1; x<10; x++)
		S.push(x);    // ��ջ 
	while( !S.empty() )
	{
		int x=S.top(); S.pop();   // ȡջ��   ��ջ 
		cout<<x<<"  ";
	}	
}

void Test2()
{
	vector<int> S;
	for(int x=1; x<10; x++)
		S.push_back(x);    // ��ջ 
	while( !S.empty() )
	{
		int x=S.back(); S.pop_back();   // ȡջ��   ��ջ 
		cout<<x<<"  ";
	}	
}

int main()
{
	Test2();
	return 0;
}

