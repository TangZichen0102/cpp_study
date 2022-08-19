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

void Test1()
{
	// 1x^3 + 3X^2 + 3X^1 + 1X^0
	map<int, int> A;  // <指数key, 系数value>   
	A[3]=1;	A[2]=3;	A[1]=3;	A[0]=1;
	Output(A);
	map<int, int> B;  // <指数key, 系数value>   
	B[13]=1;	B[2]=3;	B[1]=-3;	B[0]=1;
	Output(B);
	Add(A,B);  // A+B => A
	Output(A);
}

int main()
{
	Test1(); 
	return 0;
}

