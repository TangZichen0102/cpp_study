#include <iostream> 
#include <vector> 
using namespace std;

void Output(vector<int> &v)
{
	for(int i=0; i<v.size(); i++)
		cout<<v[i]<<" ";
	cout<<endl;
} 

int main()
{
	vector<int> v;  // ����  ��̬����
	//v.size()     //���ݵĸ��� 
	//v.capacity() //�ռ�Ĵ�С 
	for(int x=1; x<100; x++)
	{
		v.push_back(x);
		cout<<v.capacity()<<" "<<v.size()<<endl; 
		// ���ڴ��������ݰ�Ǩ����ʱ ���� 
	}
	//Output(v);
	return 0;
}
