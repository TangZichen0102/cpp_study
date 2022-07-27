#include  <iostream>
using namespace std;

void Output(int a[], int n)
{
	for(int i=0; i<n; i++)
		cout<<a[i]<<" "; 
	cout<<endl; 
} 

int Search(int a[],int n, int x)
{
	for(int i=0; i<n; i++)
		if(a[i]==x)
			return i;
	return -1;
}
// ��a[0]...a[n-1]�У�ɾ��a[k] 
int RemoveAt(int a[],int n, int k)
{
	for(int i=k+1; i<n; i++)
		a[i-1]=a[i];
	return n-1;
}

// ģ�黯������Ʒ��� 
int SearchRemove1(int a[],int n, int x)
{
	int k=Search(a,n,x);
	if(k==-1)   return n;
	return RemoveAt(a,n, k);
} 
// �ṹ��������Ʒ��� 
int SearchRemove2(int a[],int n, int x)
{
	int i;
	for(i=0; i<n; i++)
		if(a[i]==x)
			break;
	if(i==n)
		return n;
	for(int j=i+1; j<n; j++)
		a[j-1]=a[j];
	return n-1;
} 
// a[10]={2,4,3,10,1,5}, na=6;
// b[10]={1,2,4,3, 7,8,9,6, 1,5}, nb=10;
// c[10]=2 4 3 1 5
int InterSet(int a[],int na, int b[],int nb, int c[])
{
	int nc=0;
	for(int i=0; i<na; i++)
	{
		int kb=Search(b,nb, a[i]);
		int kc=Search(c,nc, a[i]);
		if(kb!=-1 && kc==-1)
			c[nc++] = a[i];
	}
	return nc;
}

int UnionSet(int a[],int na, int b[],int nb, int c[])
{
	int nc=0;
	for(int i=0; i<na; i++)
		if( Search(c,nc,a[i])==-1 )
			c[nc++]=a[i];
	for(int i=0; i<nb; i++)
		if( Search(c,nc,b[i])==-1 )
			c[nc++]=b[i];
	return nc;
}
// a[]: 2,4,3,2,1,2   n=6
// a[]: 2 4 3 1
int Unique(int a[],int n)
{
	int k=0;  // ��ɾ���ĸ��� 
	for(int i=1; i<n; i++)
	{
		// a[i]��a[0]..a[i-1-k]�У��Ƿ���ֹ�
		// ��a[0]..a[i-1-k]�У�����a[i]���±꣬�ж��Ƿ����-1 
		if( Search(a,i-k, a[i])!=-1  ) // ���ֹ� 
			k++; 
		else
			a[i-k] =a[i];  // !!
	}
	return n-k;
}
/*
	for(int i=0; i<n; i++)
	{
		int k=Search(a,n, a[i]); // ???
		if(k!=-1)
			RemoveAt(a,n, i);  // ??
	}
*/ 
int main()
{
	int a[10]={2,4,3,2,1,2}, na=6;
	int b[10]={1,8,4,1, 6,8,9,6, 8,5}, nb=10;
	Output(a, na);	na = Unique(a,na);	Output(a, na);
	Output(b, nb);	nb = Unique(b,nb);	Output(b, nb);
	return 0;
}

