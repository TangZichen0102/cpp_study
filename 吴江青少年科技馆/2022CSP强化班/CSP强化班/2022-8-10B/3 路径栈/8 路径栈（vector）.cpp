#include <iostream> 
#include <iomanip> 
#include <vector> 
#include <stack> 
using namespace std;

struct Loc
{
	int i,j;
};
void Output(vector<Loc> &Path)
{
	for(int k=0; k<Path.size(); k++) 
		cout<<Path[k].i<<","<<Path[k].j<<"  ";
	cout<<endl; 
}

bool isRepeat(vector<Loc> &Path, int i, int j)  // ���븴�� 
{
	for(int k=0; k<Path.size(); k++) 
		if(Path[k].i==i && Path[k].j==j)
			return true;
	return false;
}

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
int di[] ={ 0, 0, 1, -1};
int dj[] ={ 1,-1, 0,  0};
int cnt=0;
void Solve(vector<vector<int> > &M, int si,int sj, int ei,int ej, vector<Loc> &Path)
{
	Loc loc={si,sj};
	Path.push_back(loc);  // ���½�ӡ   ��ջ 
	// ���ս������
	if(si==ei && sj==ej)
	{
		cnt++;
		cout<<cnt<<":  ";
		Output(Path);
	}
	else
	{
		// �м�ķֽ���� 
		// Խ��  ײǽ   �ظ�· 
		int m=M.size(), n=M[0].size();
		for(int k=0; k<4; k++)
		{
			int nexti=si+di[k], nextj=sj+dj[k];
			if(nexti<0 || nexti>=m)  continue;  // Խ�� 
			if(nextj<0 || nextj>=n)  continue;
			if(M[nexti][nextj]!=0 )  continue;  // ײǽ
			if( isRepeat(Path,nexti,nextj)==true )  continue;  // �ظ�·
			Solve(M, nexti,nextj, ei,ej, Path);  
		}
	}
	Path.pop_back(); // ������ӡ   ��ջ
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
	vector<Loc> Path;    // ȫ�̵ļ�¼Ա 
	Solve(M, 0,0, m-1,n-1, Path);
	return 0;
}
