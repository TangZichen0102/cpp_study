#include <iostream> 
#include <iomanip> 
#include <map>    // ӳ��   ��ͼ 
using namespace std;

void Output(map<int,int> &M)
{
	for(map<int,int>::iterator it=M.begin(); it!=M.end(); it++)
		//if(it->second!=0)
			cout<<it->second<<"X^"<<it->first<<" + "; 	// ϵ��it->second  ָ��it->first  
	cout<<endl;
}
void Add(map<int, int> &A, map<int, int>& B)  // A+B => A
{
	for(map<int,int>::iterator it=B.begin(); it!=B.end(); it++)
		A[it->first] += it->second;  // ϵ��it->second  ָ��it->first  
}

void Mul(map<int, int> &A, map<int, int>& B, map<int, int>& C)  // A*B => C
{
	for(map<int,int>::iterator ita=A.begin(); ita!=A.end(); ita++)
		for(map<int,int>::iterator itb=B.begin(); itb!=B.end(); itb++)
		{
			// *ita ���� *itb  // ϵ��it->second  ָ��it->first  
			int coef = ita->second * itb->second;  // ϵ����� 
			int index= ita->first  + itb->first;    // ָ�����
			C[index] += coef;
		}
}

void Test1()
{
	// 1x^3 + 3X^2 + 3X^1 + 1X^0
	map<int, int> A;  // <ָ��key, ϵ��value>   
	A[3]=1;	A[2]=3;	A[1]=3;	A[0]=1;
	Output(A);
	map<int, int> B;  // <ָ��key, ϵ��value>   
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
	map<int, int> B;  // <ָ��key, ϵ��value>   
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

