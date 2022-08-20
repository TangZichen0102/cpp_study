#include <iostream> 
#include <iomanip> 
#include <map>    // 映射   地图 
using namespace std;

void Output(map<int,int> &M)
{
	for(map<int,int>::iterator it=M.begin(); it!=M.end(); it++)
		cout<<it->second<<"X^"<<it->first<<" + "; 	// 系数it->second  指数it->first  
	cout<<endl;
}

void Test1()
{
	// 1x^3 + 3X^2 + 3X^1 + 1X^0
	map<int, int> M;  // <指数key, 系数value>   
	M[3]=1;	M[2]=3;	M[1]=3;	M[0]=1;
	Output(M);
}
void Test2()
{
}

int main()
{
	Test1(); 

	return 0;
}

