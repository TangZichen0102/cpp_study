#include <iostream> 
#include <iomanip> 
#include <map>    // 映射   地图 
using namespace std;

void Output(map<int,int> &M)
{
	for()
		
	cout<<endl;
}

void Test1()
{
	map<int, int> M;  // <key, value>    <x, f(x)>  <学号，成绩> 
	M[20210324] = 99 ;   // 不是数组 ， 是红黑树 ，按照key排序 
	M[20210321] = 91 ;
	M[20210325] = 100 ;
	M[20210321] += 2 ;
	Output(M);
}
void Test2()
{
	int a[]={4,5,6,7,1,4,5,6,7,4,
			 5,6,7,8,2,3,8,9,2,3}, n=20;
	map<int, int> M;
	for(int i=0; i<n; i++)
		???

	Output(M);
}

int main()
{
	//Test1(); 
	Test2(); 
	return 0;
}

