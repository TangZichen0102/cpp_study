#include <iostream> 
#include <vector> 
using namespace std;

int main()
{
	vector<int> v;  // ����  ��̬����
	for(int x=1; x<10; x++)
		v.push_back(x);
	for(int i=0; i<v.size(); i++)
		cout<<v[i]<<" ";
	return 0;
}
