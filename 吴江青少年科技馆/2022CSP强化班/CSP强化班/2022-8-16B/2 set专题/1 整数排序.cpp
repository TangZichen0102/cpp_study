#include <iostream> 
#include <iomanip> 
#include <set> 
using namespace std;

void Output(set<int> &S)
{
	for(set<int>::iterator it=S.begin(); it!=S.end(); it++)
		cout<<*it<<" ";
	cout<<endl;
}

int main()
{
	int a[]={4,5,6,7,1,4,5,6,7,4,
			 5,6,7,8,2,3,8,9,2,3}, n=20;
	set<int> S;  // 集合：没有重复数
	for(int i=0; i<n; i++) 
		S.insert( a[i]);
	Output(S);
	set<int>::iterator it = S.find(2);
	if(it==S.end())
		cout<<"No Exist"<<endl;
	else
	{
		cout<<*it<<endl;
		it++;    // 和list一样，it+=2 err!!! 
		cout<<*it<<endl;
		S.erase(it);
		Output(S);
	}
	return 0;
}



