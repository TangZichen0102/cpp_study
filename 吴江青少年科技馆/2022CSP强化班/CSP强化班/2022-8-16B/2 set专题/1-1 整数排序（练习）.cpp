#include <iostream> 
#include <iomanip> 
#include <set> 
using namespace std;

void Output(set<int> &S)
{
	cout<<endl;
}

int main()
{
	int a[]={4,5,6,7,1,4,5,6,7,4,
			 5,6,7,8,2,3,8,9,2,3}, n=20;
	set<int> S;  // ���ϣ�û���ظ���
	for(int i=0; i<n; i++) 
		S.��������;
	Output(S);
	set<int>::iterator it = ������ 
	if(it==S.end())
		cout<<"No Exist"<<endl;
	else
	{
		cout<<*it<<endl;
		it++;    // ��listһ����it+=2 err!!! 
		cout<<*it<<endl;
		�������� 
		Output(S);
	}
	return 0;
}



