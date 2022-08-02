#include <iostream> 
#include <vector> 
using namespace std;

void Output(vector<int> &v)
{
	// v[0]++; 
	for(int i=0; i<v.size(); i++)
		cout<<v[i]<<" ";
	cout<<endl;
} 

int main()
{
	vector<int> v;  // 向量  动态数组
	for(int x=1; x<1000; x++)
		v.push_back(x);
	Output(v);
	Output(v);
	return 0;
}
