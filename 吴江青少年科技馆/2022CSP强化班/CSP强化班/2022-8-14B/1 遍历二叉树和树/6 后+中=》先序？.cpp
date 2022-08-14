#include <iostream> 
#include <iomanip> 
using namespace std;
/*
先序：abc
中序：bac
       a
     b   c
后序：bca 

string pre="C(BADEF)(GH)";  // 先序 
string mid="(ABEDF)C(HG)";  // 中序
                  C
             B         G
          A    D     H
              E F
string post = left + right + c
            = left + HG + c  
            = (A + EFD + B ) + HG + c  
            = AEFDBHGc  

string pre="B(A)(DEF)";  // 先序 
string mid="(A)B(EDF)";  // 中序
*/ 
/*
根据先序pre[ipre](..........pre[ipre+k]) (pre[ipre+k+1]...... pre[ipre+n-1])
    中序(mid[imid]........) mid[imid+k]  (mid[imid+k+1]...... mid[imid+n-1]， 构造后序序列 
*/
string GetPost(string &pre,int ipre, string &mid,int imid, int n)
{
	if(n==0)  return "";
	char root=pre[ipre];
	int k;
	for(k=0; k<n; k++) 
		if(mid[imid+k]==root)
			break;
	string left  = GetPost(pre,ipre+1,   mid,imid,         k);  // 得到左子树的后序序列 
	string right = GetPost(pre,ipre+k+1, mid,imid+k+1, n-k-1);  // 得到右子树的后序序列 
	return left+right + root;
}

int main()
{
	string pre="CBADEFGH";  // 先序 
	string mid="ABEDFCHG";  // 中序
	int n=pre.length();
	string post=GetPost(pre,0, mid,0, n);    // 后序
	cout<<post<<endl;   // AEFDBHGC
	return 0;
}





