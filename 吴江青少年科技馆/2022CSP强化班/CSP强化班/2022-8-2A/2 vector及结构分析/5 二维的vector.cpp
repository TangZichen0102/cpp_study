#include <iostream> 
#include <vector> 
using namespace std;

void Output(vector<int> &v)
{
	for(int i=0; i<v.size(); i++)
		cout<<v[i]<<" ";
	cout<<endl;
} 
// 重载函数：名字可以相同，参数个数、类型不同 
void Output(vector<vector<int> > &m)
{
	for(int i=0; i<m.size(); i++)
	{
		for(int j=0; j<m[i].size(); j++)
			cout<<m[i][j]<<"  ";
		cout<<endl;	
	}
} 

int main()
{
	int a[10][8];
	vector<vector<int> > M;
	vector<int> v1;	v1.push_back(1); v1.push_back(11); v1.push_back(111);
	vector<int> v2(4, 9);	v2[0]=2; v2[1]=22; v2[2]=222;
	vector<int> v3;	v3.push_back(3); v3.push_back(33);
	M.push_back(v1);
	M.push_back(v2);
	M.push_back(v3);
	Output(M);
	return 0;
}
