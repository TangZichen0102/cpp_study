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

bool empty(Queue &Q)

int front(Queue &Q)

void pop(Queue &Q)


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

