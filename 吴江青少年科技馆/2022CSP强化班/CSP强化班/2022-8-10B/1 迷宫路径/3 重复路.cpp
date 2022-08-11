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
	M[si][sj]=2;  // ���½�ӡ 
	// ���ս������
	if(si==ei && sj==ej)
		Output(M);
	else
	{
		// �м�ķֽ���� 
		// Խ��  ײǽ   �ظ�· 
		int m=M.size(), n=M[0].size();
		if(sj+1<n  && M[si][sj+1]==0)  Solve(M, si,sj+1, ei,ej);  // �� 
		if(si+1<m  && M[si+1][sj]==0)  Solve(M, si+1,sj, ei,ej);  // ����
		if(sj-1>=0 && M[si][sj-1]==0)  Solve(M, si,sj-1, ei,ej);  // ���� 
		if(si-1>=0 && M[si-1][sj]==0)  Solve(M, si-1,sj, ei,ej);  // �� 
	}
	M[si][sj]=0; // ������ӡ
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
