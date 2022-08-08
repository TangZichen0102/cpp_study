#include<iostream>
#include<vector>
#include<list>
#include<cmath>
using namespace std;
/*  n=10
��ʼ��     1 2 3 4 5 6 7 8 9 10
������   7 8 3 4 5 6 9 10 1 2 
�����  =   1 5 1 1 1 3 1  9 1 = 23
������   10 1 9 2 8 3 7 4 6 5
�����  =    9 8 7 6 5 4 3 2 1 = 45

�������    5 7 3 9 1 10 2 8 4 6 
������  =    2 4 6 8 9  8 6 4 2 = 49
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
	int n=11;
	vector<int> v(n);
	for(int i=0; i<n; i++)  v[i]=i+1;
	list<int> L;
	// ��ʼ�� 
	L.push_back(v[0]);	L.push_back(v[n-1]);
	int i=1, j=n-2;
	while(i<j)
	{
		if(i%2==0) 
			L.push_front(v[i]),  L.push_back(v[j]);  // �� v[i]����ͷ��  v[j]����β
		else
			L.push_back(v[i]),   L.push_front(v[j]); // �� v[i]����β��  v[j]����ͷ
		i++, j--;
	}	
	if(i==j)
	{
		int d1=abs(v[i]-L.front());  // ��ֵ L.front()
		int d2=abs(v[i]-L.back());   // βֵ L.back() 
		if( d1>d2 ) 
			L.push_front(v[i]);
		else
			L.push_back(v[i]);
	}
	Output(L);
	return 0;
}

