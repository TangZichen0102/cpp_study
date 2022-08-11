#include <iostream> 
#include <iomanip> 
#include <vector> 
#include <stack> 
using namespace std;
/*
 0 
 0 1 
 0 1 2
 0 1 2 3
 0 1 2 3 4
 0 1 2 4
 0 1 3
 0 1 3 4
 0 1 4

 0 2
 0 2 3
 0 2 3 4
 0 2 4

 0 3 
 0 3 4
 
 0 4  

 1 
 1 2
 1 2 3
 1 2 3 4
 1 2 4
 1 3
 1 3 4
 1 4

 2
 2 3
 2 3 4
 2 4

 3 
 3 4
 
 4  
*/
void Output(vector<int> &Path)
{
	for(int k=0; k<Path.size(); k++) 
		cout<<Path[k]<<"  ";
	cout<<endl; 
}

// 以a[si]为起点，向后搜索 
void Solve(int a[],int n, int si, vector<int> &Path)
{
	Path.push_back(a[si]);
	Output(Path);
	for(int i=si+1; i<n; i++)
		Solve(a,n,i, Path);
	Path.pop_back();
}

int main()
{
	int a[]={0,1,2,3,4}, n=4;
	vector<int> Path;   //全程的记录员 
	for(int i=0; i<n; i++)
		Solve(a,n, i, Path);
	return 0;
}




