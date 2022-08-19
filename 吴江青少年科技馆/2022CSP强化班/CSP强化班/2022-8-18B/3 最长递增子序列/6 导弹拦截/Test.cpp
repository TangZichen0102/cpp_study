#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void Output(vector<int> &v)
{
	for(int i=0; i<v.size(); i++)
		cout<<v[i]<<"  ";
	cout<<endl;
}

int main()
{
	freopen("in.txt", "r", stdin);
	int n;  cin>>n;
	vector<int> v(n); 
	for(int i=0; i<n; i++)	cin>>v[i]; 

	return 0;
}

//об╠Й:  0   1   2   3    4  5   6  7 
//      389 207 155 300 299 170 158 65
//dp[]    1  2   3   2   3   4   5   6
//prev[] -1  0   1   0   3   4   5   6




