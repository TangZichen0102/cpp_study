#include <bits/stdc++.h>
using namespace std;
bool isBothSame(int a[], int b[], int n)
{
}

bool isSame(int a[], int b[], int n)
{
	map<int,int> m;
	for(int i = 0;i < n;i++)
	{
		if(m.find(a[i])==m.end())
			m[a[i]] = b[i];  // 创建新规则 
		else
			if(m[a[i]] != b[i])  // 检验已经存在的规则
				return false;
	} 
	return true;
}
int main()
{
	int n=11;
	int a[]={1,2,3,1,6,3,1,2,3,4,4};
	int b[]={2,5,8,2,5,8,2,5,8,0,0};
	int c[]={2,5,8,2,6,8,2,5,8,0,0};
	cout<<isSame(a,b,n)<<endl;  // true 
	cout<<isSame(b,a,n)<<endl;  // false
	return 0;
}
