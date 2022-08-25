#include <iostream>
#include <vector>
#include <stack>
using namespace std;

// ����sd����Сֵ���±�imin, set[imin]������false 
int FindiMin(vector<int>& sd, vector<bool> &set)
{
	int imin=0;
	while(set[imin]==true)
		imin++;
	for(int i=imin+1; i<sd.size(); i++)
		if(set[i]==false && sd[i]<sd[imin])
			imin=i;
	return imin;
}

// ��G�У����� ��v���������ж������̾��룬����sd[]�� 
void Dijkstra(vector<vector<int> > &G, int sv, vector<int>& sd, vector<int > &prev)
{
	int n=G.size();
	vector<bool> set(n, false);  // set[i]==true:����i�����·�������Ѿ�ȷ�� 
	sd=G[sv];	// sd�ĳ�ʼ��
	set[sv]=true;
	for(int i=1; i<n; i++)
	{
		// ��δȷ����̾���Ķ����У���sd����Сֵ
		int w = FindiMin(sd, set);  set[w]=true;  // sv->w�����·�������Ѿ�ȷ�� 
		// ��δȷ����̾���Ķ����У�����sd 
		for(int v=0; v<n; v++)
		{
			if(set[v]==true)   continue; // v�����·�������Ѿ��ܹ�ȷ��
			if(sd[w]+G[w][v] < sd[v])
				sd[v] = sd[w]+G[w][v], prev[v]=w;  // ѡ����w��Ϊ��һ������ 
		}
	} 
} 
void OutputPath(vector<int > &prev, int ev)
{
	while( ev!=-1 )
	{
		cout<<ev<<" ";
		ev=prev[ev];
	}
	cout<<endl; 
}

int main() 
{
	freopen("g.txt","r", stdin);
	int n;  cin>>n;
	vector<vector<int> > G(n, vector<int>(n));  // �ڽӾ���
	for(int i=0; i<n; i++)
		for(int j=0; j<n; j++)
			cin>>G[i][j];
	int sv=0;
	vector<int>  sd(n);   // ���·�����ȵ����� 
	vector<int > prev(n, -1);    // prev[i]�ǵ��ﶥ��i֮ǰ�Ķ��� 
	Dijkstra(G, sv, sd, prev);
	for(int ev=0; ev<n; ev++)
	{
		cout<<sv<<"->"<<ev<<": " <<sd[ev]<<endl;
		OutputPath(prev, ev);
	}
	return 0; 
}
