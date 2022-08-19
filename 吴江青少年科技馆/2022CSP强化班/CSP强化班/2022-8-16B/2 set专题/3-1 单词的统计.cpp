#include <iostream> 
#include <iomanip> 
#include <string> 
#include <set> 
using namespace std;

struct Node
{
	string word;
	int cnt;
};

// ���������
// Node���͵�<���������
bool operator<(const Node &n1, const Node &n2) 
{
	return n1.word < n2.word;
}
void Output(set<Node> &S)
{
	for(set<Node>::iterator it=S.begin(); it!=S.end(); it++)
		cout<< it->word <<": "<< it->cnt<<endl;
	cout<<endl;
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
	string  word[]={"����","����","����","����","����", 
	                "����","����","����","����","����","����"};  
	int n=11;
	set<Node> S;  // ���ϣ�û���ظ���
	for(int i=0; i<n; i++) 
		Insert(S, word[i]);
	Output(S); 
	return 0;
}






