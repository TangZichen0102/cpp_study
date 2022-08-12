#include <iostream> 
#include <iomanip> 
#include <vector> 
#include <queue> 
using namespace std;

struct Loc
{
	int i,j;
};

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


void Bfs(vector<vector<int>  > &M,    // �����Ŀռ� 
	     vector<vector<bool> > &visited,    // ���������еĺۼ�
		 int i, int j)
{
	int m=M.size(), n=M[0].size();
	queue<Loc> Q;
	Loc loc={i,j};
	Q.push(loc);  visited[loc.i][loc.j]=true;  // ԭʼ��������У�����ǣ������ظ��� 
	while( !Q.empty() )
	{
		// cout<<Q.size()<<endl;  !!!
		// ������
		loc=Q.front(); Q.pop(); 
		// �ֽ������С���⣬������ 
		for(int k=0; k<4; k++) 
		{
			Loc next={loc.i+di[k], loc.j+dj[k] };
			if(next.i<0 || next.i>=m)  continue;  // Խ�� 
			if(next.j<0 || next.j>=n)  continue;
			if(M[next.i][next.j]==0 )  continue;  // ���ܵ�������ȥ 
			if(visited[next.i][next.j]==true)  continue;  // �������ظ�·���ñ�ǣ� 
			Q.push(next);   visited[next.i][next.j]=true;   // ���е��ھӽ����У�����ǣ������ظ��� 
		}
	}
}

int Bfs(vector<vector<int> > &M)
{
	int cnt=0; 
	int m=M.size(), n=M[0].size();
	vector<vector<bool> > visited(m, vector<bool>(n, false));  // ������� !!
	for(int i=0; i<m; i++)
		for(int j=0; j<n; j++)
		{
			if(M[i][j]==0) continue;   // ���ܵ�������ȥ 
			if(visited[i][j]==true) continue;   // �����ظ�·
			// ����һ���������е�������visited�б�� 
			Bfs(M,visited, i,j);
			cnt++;
		}	
	return cnt;
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
	int cnt=Bfs(M);
	cout<<cnt<<endl; 
	return 0;
}
