#include  <iostream>
using namespace std;

void Output(int a[], int n)
{
	for(int i=0; i<n; i++)
		cout<<a[i]<<" "; 
	cout<<endl; 
} 
//                  i=5
// a[10]={1,3,5,7,9}, na=5;
//                j=4
// b[10]={2,4,6,8,10,12,14,16}, nb=8;
//                      k=3   // 下一个进数组的元素的下表标，也是数组元素的个数
// C[20]={1,2,3, ... 9 }
// 形式（结构）美！ 
// 性能美！  
// 有序插入方法：O(m*n)
// 归并：O(m+n)
 
int Merge(int a[],int na, int b[],int nb, int c[])
{
	int i=0,j=0,k=0;
	while(i<na && j<nb)
		if(a[i]<b[j])
			c[k++]=a[i++];
		else
			c[k++]=b[j++];
	while(i<na)
		c[k++]=a[i++];
	while(j<nb)
		c[k++]=b[j++];
	return k;
}

int main()
{
	int a[10]={1,3,5,7,9}, na=5;
	int b[10]={2,4,6,8,10,12,14,16}, nb=8;
	Output(a, na);   
	Output(b, nb);   
	int c[20], nc;
	nc = Merge(a,na, b,nb, c);
	Output(c, nc);   
	return 0;
}






