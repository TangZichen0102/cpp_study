#include <iostream> 
#include <iomanip> 
#include <vector> 
using namespace std;

void Output(vector<vector<int> > &m)
{
	for(int i=0; i<m.size(); i++)
	{
		for(int j=0; j<m[i].size(); j++)
			cout<<setw(2)<<m[i][j]<<"  ";
		cout<<endl;	
	}
	cout<<endl;	
} 
int step=1; 
int sd=0x7fffffff;   // ��̾��볤�� 
int di[] ={ 0, 0, 1, -1};
int dj[] ={ 1,-1, 0,  0};
void Solve(vector<vector<int> > &M, int si,int sj, int ei,int ej)
{
	// Խ��  ײǽ   �ظ�· 
	int m=M.size(), n=M[0].size();
	if(si<0 || si>=m)  return;
	if(sj<0 || sj>=n)  return;
	if(M[si][sj]!=0 )  return;
	M[si][sj]=step;  step++; // ���½�ӡ 
	// ���ս������
	if(si==ei && sj==ej)
	{
		Output(M);
		if(step<sd) 
			sd=step;
	}
	else
	{
		// �м�ķֽ���� 
		for(int k=0; k<4; k++)
			Solve(M, si+di[k],sj+dj[k], ei,ej);  
	}
	step--;
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
	cout<<sd-1<<endl;
	return 0;
}
