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
string GetPost(string &pre, string &mid)
{
	if()  return ";
	string left  = GetPost(pre, mid) ;  // 得到左子树的后序序列 
	string right = GetPost(pre, mid) ;  // 得到右子树的后序序列 
	return left+right + root;
}

int main()
{
	string pre="CBADEFGH";  // 先序 
	string mid="ABEDFCHG";  // 中序
	string post=GetPost(pre, mid);    // 后序
	cout<<post<<endl;   // AEFDBHGC
	return 0;
}





