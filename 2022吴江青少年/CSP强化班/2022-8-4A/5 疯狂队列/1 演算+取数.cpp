#include<iostream>
#include<vector>
#include<list>
using namespace std;
/*  n=10
初始：     1 2 3 4 5 6 7 8 9 10
疯狂队列   7 8 3 4 5 6 9 10 1 2 
疯狂数  =   1 5 1 1 1 3 1  9 1 = 23
疯狂队列   10 1 9 2 8 3 7 4 6 5
疯狂数  =    9 8 7 6 5 4 3 2 1 = 45

最疯狂队列    5 7 3 9 1 10 2 8 4 6 
最疯狂数  =    2 4 6 8 9  8 6 4 2 = 49
*/
void Output(list<int> &L) 
{
	list<int>::iterator it;
	for(it=L.begin(); it!=L.end(); it++)
		cout<<*it<<"  ";
	cout<<endl;	
}

int main()
{
	int n=10;
	vector<int> v(n);
	for(int i=0; i<n; i++)  v[i]=i+1;
	list<int> L;
	int i=0, j=n-1;
	while(i<j)
	{
		cout<<v[i]<<" "<<v[j]<<endl;
		i++, j--;
	}	
	if(i==j)
		cout<<v[i]<<endl;
	return 0;
}

