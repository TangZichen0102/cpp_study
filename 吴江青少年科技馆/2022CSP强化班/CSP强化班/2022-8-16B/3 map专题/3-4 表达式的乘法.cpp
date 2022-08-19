#include <iostream> 
#include <iomanip> 
#include <map>    // 映射   地图 
using namespace std;

void Output(map<int,int> &M)
{
	for(map<int,int>::iterator it=M.begin(); it!=M.end(); it++)
		//if(it->second!=0)
			cout<<it->second<<"X^"<<it->first<<" + "; 	// 系数it->second  指数it->first  
	cout<<endl;
}
void Add(map<int, int> &A, map<int, int>& B)  // A+B => A
{
	for(map<int,int>::iterator it=B.begin(); it!=B.end(); it++)
		A[it->first] += it->second;  // 系数it->second  指数it->first  
}

void Mul(map<int, int> &A, map<int, int>& B, map<int, int>& C)  // A*B => C
{
	for(map<int,int>::iterator ita=A.begin(); ita!=A.end(); ita++)
		for(map<int,int>::iterator itb=B.begin(); itb!=B.end(); itb++)
		{
			// *ita 乘以 *itb  // 系数it->second  指数it->first  
			int coef = ita->second * itb->second;  // 系数相乘 
			int index= ita->first  + itb->first;    // 指数相加
			C[index] += coef;
		}
}

void Test1()
{
	// 1x^3 + 3X^2 + 3X^1 + 1X^0
	map<int, int> A;  // <指数key, 系数value>   
	A[3]=1;	A[2]=3;	A[1]=3;	A[0]=1;
	Output(A);
	map<int, int> B;  // <指数key, 系数value>   
	B[3]=1;	B[2]=3;	B[1]=3;	B[0]=1;
	Output(B);
	map<int, int> C;
	Mul(A,B, C);  // A*B => C
	Output(C);
}
// (x+1)^100
void Test2()
{
	map<int, int> A;  	A[0]=1;  // 1
	map<int, int> B;  // <指数key, 系数value>   
	B[1]=1;	B[0]=1;   // (x+1)
	for(int i=0; i<30; i++) 
	{
		map<int, int> C;
		Mul(A,B, C);  // A*B => C
		cout<<i<<":  ";
		Output(C);
		A=C;
	}
}

int main()
{
	Test2(); 
	return 0;
}

