#include <iostream> 
#include <vector> 
#include <algorithm> 
using namespace std;
// ��֪����ԭľ�ĳ���lens[0]...lens[n-1],��k�Σ������Ķγ� 
int Solve(vector<int> &lens, int k)
{
	int min=1, max=GetMax(lens);  // ÿ�κ�����de����[min, max] 
	
	int mid=(min+max)/2;
	int num=GetNum(lens, mid);  //�и�����Ķ��� 
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
