#include <iostream> 
#include <iomanip> 
#include <string> 
#include <set> 
#include <vector>
using namespace std;

struct Node
{
	string word;
	int cnt;
};

// 运算符重载
// Node类型的<运算符重载
bool operator<(const Node &n1, const Node &n2) 
{
	return n1.word < n2.word;
}
void Output(set<Node> &S, vector<Node> &ans)
{
	ans.resize( S.size() );
	int i=0;
	for(set<Node>::iterator it=S.begin(); it!=S.end(); it++)
		ans[i++] = *it;	//ans.push_back(*it) ;
}
void Output(vector<Node> &v)
{
	for(int i=0; i<v.size(); i++)
		cout<<v[i].word<<": "<<v[i].cnt<<endl;
}

void Insert(set<Node> &S, string &word) 
{
	Node node={word, 1};
	set<Node>::iterator it = S.find(node);
	if(it!=S.end())
	{
		node.cnt =	it->cnt + 1; 
		S.erase(it);
	}
	S.insert(node);
}

int main()
{
	set<Node> S;  // 集合：没有重复数
	freopen("3.txt", "r", stdin);
	while( !cin.eof() )
	{
		string word; cin>>word;
		Insert(S, word);
	}
	vector<Node> ans;
	Output(S, ans); 
	Output(ans); 
	return 0;
}






