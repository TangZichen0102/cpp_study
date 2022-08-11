#include <iostream> 
#include <iomanip> 
#include <vector> 
#include <stack> 
using namespace std;
/*
4������ȫ���� -�� 4�� 3������ȫ���� 
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
// ��a[0]...a[n-1] ����ȫ���У��˿̣����ھ���a[ith]��ȡֵ 
void Solve(int a[],int n, int ith)
{
	nn++;
	// ���շ���
	if(ith==n) 
		Output(a,n);
	else
		// �ֽ���� 
		// a[ith]������˭���� : a[ith], a[ith+1], a[ith+2]....a[n-1]
		for(int k=ith; k<n; k++) 
		{
			swap(a[ith], a[k]);  // ���� 
			Solve(a,n, ith+1);   // ��һ������ 
			swap(a[ith], a[k]);  // ������ȥ 
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



