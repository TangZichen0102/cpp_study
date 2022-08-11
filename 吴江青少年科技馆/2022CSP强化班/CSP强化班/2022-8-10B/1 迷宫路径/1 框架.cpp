#include <iostream> 
#include <vector> 
using namespace std;

void Output(vector<vector<int> > &m)
{
	for(int i=0; i<m.size(); i++)
	{
		for(int j=0; j<m[i].size(); j++)
			cout<<m[i][j]<<"  ";
		cout<<endl;	
	}
} 
void Solve(vector<vector<int> > &M, int si,int sj, int ei,int ej)
{
	// ���ս������
	if(si==ei && sj==ej)
		return;
	// �м�ķֽ���� 
	Solve(M, si,sj+1, ei,ej);  // �� 
	Solve(M, si+1,sj, ei,ej);  // ����
	Solve(M, si,sj-1, ei,ej);  // ���� 
	Solve(M, si-1,sj, ei,ej);  // �� 
}

int main()
{
	freopen("data.txt", "r", stdin);
	int m,n;  cin>>m>>n;
	vector<vector<int> > M(m, vector<int>(n,0));
	for(int i=0; i<m; i++)
		for(int j=0; j<n; j++)
			cin>>M[i][j];
	Output(M);
	Solve(M, 0,0, m-1,n-1);
	return 0;
}
