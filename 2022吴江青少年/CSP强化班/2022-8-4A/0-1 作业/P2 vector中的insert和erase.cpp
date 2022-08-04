#include <bits/stdc++.h>

using namespace std;

void Output(vector<int> &v);

int main()
{
	vector<int> v1(5,2),v2(3,1),v3(4,3);
	Output(v1);
	
	v1.insert(v1.begin()+3,v2.begin(),v2.end());
	Output(v1);
	
	v1.insert(v1.begin()+4,v3.begin(),v3.end());
	Output(v1);
	
	v3=v1;
	v1.erase(v1.begin()+2,v1.end()-2);
	Output(v1);
	
	v1.swap(v3);
	Output(v1);
	Output(v3);
	
	return 0;
}

//void out(int &n){cout<<n<<" ";}
void Output(vector<int> &v)
{
	for(int i=0; i<v.size(); i++)
		cout<<v[i]<<" ";
//迭代器 
//	for(vector<int>::iterator it=v.begin(); it<v.end();it++)
//		cout<<*it<<" ";

//for_each语句，out是如上的自定义函数 
//	for_each(v.begin(),v.end(),out); 
	
	cout<<endl;
}
