#include <iostream> 
#include <vector> 
#include <stack> 
using namespace std;

void Test1()
{
	stack<int> S;
	for(int x=1; x<10; x++)
		S.push(x);    // 进栈 
	while( !S.empty() )
	{
		int x=S.top(); S.pop();   // 取栈顶   出栈 
		cout<<x<<"  ";
	}	
}

void Test2()
{
	vector<int> S;
	for(int x=1; x<10; x++)
		S.push_back(x);    // 进栈 
	while( !S.empty() )
	{
		int x=S.back(); S.pop_back();   // 取栈顶   出栈 
		cout<<x<<"  ";
	}	
}

int main()
{
	Test2();
	return 0;
}

