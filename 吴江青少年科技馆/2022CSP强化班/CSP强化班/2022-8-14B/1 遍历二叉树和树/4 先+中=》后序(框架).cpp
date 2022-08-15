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
string GetPost(string &pre, string &mid)
{
	if()  return ";
	string left  = GetPost(pre, mid) ;  // �õ��������ĺ������� 
	string right = GetPost(pre, mid) ;  // �õ��������ĺ������� 
	return left+right + root;
}

int main()
{
	string pre="CBADEFGH";  // ���� 
	string mid="ABEDFCHG";  // ����
	string post=GetPost(pre, mid);    // ����
	cout<<post<<endl;   // AEFDBHGC
	return 0;
}





