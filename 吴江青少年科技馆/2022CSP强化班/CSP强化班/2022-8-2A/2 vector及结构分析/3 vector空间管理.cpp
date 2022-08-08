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
	vector<int> v;  // 向量  动态数组
	//v.size()     //数据的个数 
	//v.capacity() //空间的大小 
	for(int x=1; x<100; x++)
	{
		v.push_back(x);
		cout<<v.capacity()<<" "<<v.size()<<endl; 
		// 存在大量的数据搬迁，耗时 ！！ 
	}
	//Output(v);
	return 0;
}
