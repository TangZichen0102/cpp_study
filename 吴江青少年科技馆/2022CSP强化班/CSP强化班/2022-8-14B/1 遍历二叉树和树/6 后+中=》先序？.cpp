#include <iostream> 
#include <iomanip> 
using namespace std;
/*
����abc
����bac
       a
     b   c
����bca 

string pre="C(BADEF)(GH)";  // ���� 
string mid="(ABEDF)C(HG)";  // ����
                  C
             B         G
          A    D     H
              E F
string post = left + right + c
            = left + HG + c  
            = (A + EFD + B ) + HG + c  
            = AEFDBHGc  

string pre="B(A)(DEF)";  // ���� 
string mid="(A)B(EDF)";  // ����
*/ 
/*
��������pre[ipre](..........pre[ipre+k]) (pre[ipre+k+1]...... pre[ipre+n-1])
    ����(mid[imid]........) mid[imid+k]  (mid[imid+k+1]...... mid[imid+n-1]�� ����������� 
*/
string GetPost(string &pre,int ipre, string &mid,int imid, int n)
{
	if(n==0)  return "";
	char root=pre[ipre];
	int k;
	for(k=0; k<n; k++) 
		if(mid[imid+k]==root)
			break;
	string left  = GetPost(pre,ipre+1,   mid,imid,         k);  // �õ��������ĺ������� 
	string right = GetPost(pre,ipre+k+1, mid,imid+k+1, n-k-1);  // �õ��������ĺ������� 
	return left+right + root;
}

int main()
{
	string pre="CBADEFGH";  // ���� 
	string mid="ABEDFCHG";  // ����
	int n=pre.length();
	string post=GetPost(pre,0, mid,0, n);    // ����
	cout<<post<<endl;   // AEFDBHGC
	return 0;
}





