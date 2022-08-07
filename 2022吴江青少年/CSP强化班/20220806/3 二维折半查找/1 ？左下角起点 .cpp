#include<iostream>
#include<vector>
using namespace std;

// 时间复杂度：O(m+n)
bool Search(vector<vector<int> > &M, int x,  int &i,int &j)
{
	int m=M.size() , n=M[0].size();
	i=m-1;  j=0;  // 从左下角出发 
	while(  ???  )
	{
		if(M[i][j]==x)
			return true;
		if()   //???
			i--;
		else
			j++
	}
	return false;
}

int main()
{
	freopen("data.txt", "r", stdin);
	int m,n;  cin>>m>>n;
	vector<vector<int> > M(m, vector<int>(n,0));
	for(int i=0; i<m; i++)
		for(int j=0; j<n; j++)
			cin>>M[i][j];

	for(int i=0; i<m; i++)
	{
		for(int j=0; j<n; j++)
		{
			int i1,j1;  bool flag = Search(M,M[i][j], i1,j1);
			if(flag==true)
				cout<<i1<<" "<<j1<<"\t";
			else
				cout<<"NoExist"<<"\t";
		}
		cout<<endl;
	}
	return 0;
}





