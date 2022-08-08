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
	int n=10;
	vector<int> v(n,-1);  // Ô¤ÏÈ¿ª±Ù¿Õ¼ä 
	Output(v);
	for(int i=0; i<n; i++)
	{
		v[i]= i*10+1;
		cout<<v.capacity()<<" "<<v.size()<<endl; 
	}
	v.push_back(999);
	v.push_back(9999);
	cout<<v.capacity()<<" "<<v.size()<<endl; 
	Output(v);
	return 0;
}
