#include <iostream> 
#include <vector> 
#include <stack> 
#include <queue> 
using namespace std;

//  �Ƚ��ȳ� 
void Test1()
{
	queue<int> Q;
	for(int x=1; x<10; x++)
		Q.push(x);    // ������
	while( !Q.empty() )
	{
		int x=Q.front(); Q.pop();   // ȡ����   ������
		cout<<x<<"  ";
	}	
}

void Test2()
{
	vector<int> Q;
	for(int x=1; x<10; x++)
		Q.push_back(x);    // ������
	while( !Q.empty() )
	{
		int x=Q.front();  Q.erase(Q.begin());   // ȡ����   ������ 
		cout<<x<<"  ";
	}	
}

int main()
{
	Test2();
	return 0;
}

