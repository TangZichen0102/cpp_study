#include<iostream>
#include<vector>
using namespace std;

void Output(vector<int> &v) 
{
	vector<int>::iterator it;    // ������  ��ȫָ�� 
	for(it=v.begin(); it!=v.end(); it++)
		cout<<*it<<"  ";
	cout<<endl;	
}
/*
     7, 2, 8, 1, 3, 4, 9, 5, 6    ����������len=1
      2,7, 1,8,   3,4, 5,9,  6    ����������len=2
      1,2,7,8,     3,4,5,9,  6    ����������len=4
         1,2,3,4,5,7,8,9,    6    ����������len=8
           1,2,3,4,5,6,7,8,9,     ����������len=9
����=log2(n)        n=1000    log2(n)=10
                    n=10000   log2(n)=14
                    n=1000000 log2(n)=20
�����������еĹ鲢��
    �����������еĹ鲢 
    1���������к�1�����������еĹ鲢 
    1�����еĸ��� 
�鲢��ȥ����  ��Ҫ������   �ռ临�Ӷ�O(n) 
*/
// �����������еĹ鲢��
// ��v[si1]....v[ei1]��v[ei1+1]....v[ei2],�鲢��t[si1]....t[ei2]
void Merge(vector<int> &v, int si1,int ei1, int ei2, vector<int> &t)
{
	int i=si1, j=ei1+1, k=si1;
	while(i<=ei1 && j<=ei2)
	{
		if(v[i]<v[j])
			t[k++]=v[i++];
		else
			t[k++]=v[j++];
	}
	while(i<=ei1)	t[k++]=v[i++];
	while(j<=ei2)	t[k++]=v[j++];
}
/*
     7, 2, 8, 1, 3, 4, 9, 5, 6    ����������len=1
      2,7, 1,8,   3,4, 5,9,  6    ����������len=2
      1,2,7,8,     3,4,5,9,  6    ����������len=4
         1,2,3,4,5,7,8,9,    6    ����������len=8
           1,2,3,4,5,6,7,8,9,     ����������len=9
*/
// ��v�еĳ���Ϊlen�����������У������鲢��t 
void MergePass(vector<int> &v, int len, vector<int> &t)
{
	int i, n=v.size();
	for(i=0; (i+2)*len-1<n; i+=2)   // �����������еĹ鲢 
		Merge(v, i*len, (i+1)*len-1, (i+2)*len-1, t);
	if(  (i+1)*len < n  )
		Merge(v, i*len, (i+1)*len-1, n-1, t);   //  1���������к�1�����������еĹ鲢 
	else
		for(int j=i*len; j<n; j++) 	t[j]=v[j];  //  1�����еĸ��� 
}

void MergeSort(vector<int> &v)
{
	int n=v.size();
	vector<int> t(n);
	int len=1;
	while( len<n )
	{
		MergePass(v, len, t);	len*=2;  //  v -> t
		if(len<n)
		{
			MergePass(t, len, v);	len*=2; //  t -> v
		}
		else
			v=t;    //  t -> v
	}	
}

int main()
{
	int a[]={7,2,8,1,3,4,9,5,6},n=9;  
	vector<int> v(a,a+n);   //��ʼ�� 
	MergeSort(v);
	Output(v);
	return 0;
}


