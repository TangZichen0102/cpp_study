#include <iostream> 
#include <vector> 
#include <stack> 
#include <queue> 
using namespace std;

struct Queue
{
	stack<int> In;
	stack<int> Out;
};
void push(Queue &Q, int x)
{
	Q.In.push(x);
}
bool empty(Queue &Q)
{
	return Q.In.empty() &&  Q.Out.empty();
}

int front(Queue &Q)
{
	while( !Q.In.empty() )
	{
		int x=Q.In.top(); Q.In.pop();  //出栈
		Q.Out.push(x) ;    // 进栈 
	}
	return Q.Out.top() ;
}

void pop(Queue &Q)
{
	while( !Q.In.empty() )
	{
		int x=Q.In.top(); Q.In.pop();  //出栈
		Q.Out.push(x) ;    // 进栈 
	}
	Q.Out.pop() ;
}


int main()
{
	Queue Q;
	for(int x=1; x<10; x++)
	 	push(Q, x);
	while( !empty(Q) )
	{
		int x=front(Q); pop(Q);
		cout<<x<<"  ";   // 1 2 3 4 5 6 7 8 9
	}
	return 0;
}

