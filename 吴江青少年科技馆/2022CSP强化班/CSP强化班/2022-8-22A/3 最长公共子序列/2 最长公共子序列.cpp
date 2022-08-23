#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;
void Output(vector<int> &v)
{
	for(int i=0; i<v.size(); i++)
		cout<<setw(2)<<v[i]<<" ";
	cout<<endl;	
}

void Output(vector<vector<int> > &M)
{
	for(int i=0; i<M.size(); i++)	
	{
		for(int j=0; j<M[i].size(); j++)	
			cout<<setw(5)<<M[i][j];
		cout<<endl;
	}
}
/*  C[i][j] = max(C[i-1][j],  C[i][j-1] )
                           i
  v1: X  X  X  X  X  X  X  X 
  v2: X  X  X  X  X  X  X  X  X  X 
                                 j
*/
int LCS(vector<int> &v1, vector<int> &v2)
{
	int m=v1.size(),n=v2.size();
	vector<vector<int> > C(m+1, vector<int>(n+1,0));  // ±È½Ï¾ØÕó
	vector<vector<int> > choice(m+1, vector<int>(n+1,-1));  // Ñ¡Ôñ¾ØÕó
	for(int i=1; i<=m; i++)
		for(int j=1; j<=n; j++)
		{
			if(v1[i-1]==v2[j-1])
				C[i][j]=C[i-1][j-1]+1, choice[i][j]=1;  // ¶Ô½ÇÏß 
			else
				if(C[i][j-1] > C[i-1][j])
					C[i][j]=C[i][j-1], choice[i][j]=2;  // ×ó²à 
				else 
					C[i][j]=C[i-1][j], choice[i][j]=3; // ÉÏ²à
		}
	Output(C);
	// ×·ËÝ
	int nn=C[m][n];
	vector<int> LIS(nn);
	int i=m,j=n;
	while(choice[i][j]!=-1)
	{
		switch(choice[i][j])
		{
			case 1: i--,j--; 
					LIS[--nn] = v1[i];		//cout<<s2[j]<<" ";
					break;
			case 2: j--; break;
			case 3: i--; break;
		}
	}	
	Output(LIS);
	return C[m][n];
}
/*
	v2[]=   ¿Õ {2, 4, 3, 1, 2, 1};
	    ¿Õ   0  0  0  0  0  0  0
	v1[]={1, 0  0  0  0  1  1  1
		  2, 0  1  1  1  1  2  2  
		  3, 0  1  1  2  2  2  2
		  2, 0  1  1  2  2  3  3
		  4, 0  1  2  2  2  3  3
		  1, 0  1  2  2  3  3  4 
		  2: 0  1  2  2  3  4  4
*/
int main()
{
	int x1[]={1,2,3,2,4,1,2},n1=7; 
	int x2[]={2,4,3,1,2,1}  ,n2=6;   
	vector<int> v1(x1,x1+n1),  v2(x2,x2+n2);
	int max=LCS(v1,v2);
	cout<<max<<endl;
}

