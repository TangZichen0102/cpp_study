#include <iostream>
using namespace std;

// 找和最大的连续子段的和
//a[] :  5, -6, 7, -3, 4, 8, -9, 10, 1,  2      20
//sum :  5  -1  7   4  8 16   7  17 18  20 

//a[] :  5, -6, 7, -3, 4, 8, -19, 10, 1,  2     16
//sum :  5  -1  7   4  8  16  -3  10 11  13
int GetMax(int a[],int n, int &maxsi,int &maxei)
{
	int sum=0, maxsum=0;
	int si=0; 
	for(int i=0; i<n; i++) 
	{
		if(sum>=0)
			sum += a[i]; // 继续累加 
		else
			sum  = a[i], si=i; // 从头开始 
		//cout<<sum<<" " ;
		if(sum>maxsum)
			maxsum = sum, maxsi=si, maxei=i;
	}
	return maxsum;
}
int main()
{
	int a[]={5,-6,7,-3,4,8,-19,10,1,2}, n=10;
	int si,ei; 
	int maxsum = GetMax(a,n, si,ei);
	cout<<si<<"  "<<ei<<endl;
	cout<<maxsum<<endl;
	return 0;
}
