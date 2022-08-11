#include <iostream> 
#include <iomanip> 
#include <vector> 
#include <stack> 
using namespace std;
/*
4个数的全排列 -》 4个 3个数的全排列 
    1 (2 3 4)
    2 (1 3 4)
    3 (2 1 4)
    4 (2 3 1)
*/
void Output(int a[],int n)
{
	for(int i=0; i<n; i++)
		cout<<a[i]<<" ";
	cout<<endl;
}

int nn=0;
// 对a[0]...a[n-1] 进行全排列，此刻，正在决定a[ith]的取值 
void Solve(int a[],int n, int ith)
{
	nn++;
	// 最终方法
	if(ith==n) 
		Output(a,n);
	else
		// 分解策略 
		// a[ith]可以由谁来坐 : a[ith], a[ith+1], a[ith+2]....a[n-1]
		for(int k=ith; k<n; k++) 
		{
			swap(a[ith], a[k]);  // 交换 
			Solve(a,n, ith+1);   // 下一步！！ 
			swap(a[ith], a[k]);  // 交换回去 
		}
}

int main()
{
	int a[]={1,2,3,4}, n=3;
	Solve(a,n, 0);
	cout<<nn<<endl;
	return 0;
}
/*
n=2
                   Solve(0);
             Solve(1)     Solve(1);  
             Solve(2)      Solve(2) 
n=3
                                Solve(0);
             Solve(1)           Solve(1);                Solve(1);  
           Solve(2)+Solve(2)    Solve(2)+Solve(2)        Solve(2)+Solve(2)
           Solve(3)+Solve(3)    Solve(3)+Solve(3)        Solve(3)+Solve(3)
*/



