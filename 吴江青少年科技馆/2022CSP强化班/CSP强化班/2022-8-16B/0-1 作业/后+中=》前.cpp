#include<bits/stdc++.h>
using namespace std;
/*
back[1],back[2],back[3],back[4],back[5]
(3)		(1		4		5)		[2]
mid[1] ,mid[2] ,mid[3] ,mid[4] ,mid[5]
(3)		[2]		(5		1		4)

          A
        /  \
       B    C
     /  \
    D   E
       / \
      F   G
*/
string MBtoP(string &mid, int ms, int me, string &back, int bs, int be)
{
	if(ms > me || bs > be)
		return "";
	int root;
	for(root=ms; root<=me; root++)
		if(mid[root]==back[be])
			break;
	string s1=MBtoP(mid,     ms, root-1, back,         bs, bs+root-ms-1);
	string s2=MBtoP(mid, root+1,     me, back, bs+root-ms,         be-1);
	return back[be]+s1+s2;
}
int main(){
	string back="DFGEBCA";
	string mid ="DBFEGAC";
	int n=7;
	string pre =MBtoP(mid, 0, n-1, back, 0, n-1);
	cout<<pre;
	return 0;
}
