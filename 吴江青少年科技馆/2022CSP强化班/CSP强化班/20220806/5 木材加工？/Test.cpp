#include <iostream> 
#include <vector> 
#include <algorithm> 
using namespace std;
// 已知所有原木的长度lens[0]...lens[n-1],分k段，求最大的段长 
int Solve(vector<int> &lens, int k)
{
	int min=1, max=GetMax(lens);  // 每段胡长度de区间[min, max] 
	
	int mid=(min+max)/2;
	int num=GetNum(lens, mid);  //切割出来的段数 
	if(num==k)
		;   // return mid; 
	else 
		if(num>k)
			;
		else
			;
}

int main() 
{ 
	freopen("data.txt","r", stdin);
	int n,k; cin>>n>>k; 
	vector<int> lens(n);
 	for(int i=0; i<n; i++) 
		cin>>lens[i];
	cout<<Solve(lens, k)<<endl;  
	return 0; 
} 
