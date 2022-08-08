#include  <iostream>
using namespace std;

int isLeap(int y)
{
	return y%400==0 || (y%4==0 && y%100!=0);
}
int MonthDay(int y,int m)
{
	if(m==4 || m==6 || m==9 || m==11)
		return 30;
	if(m==2)	
		return 28+isLeap(y);
	return 31;
}
// 本年内过去了多少天 
int PassDay(int y,int m,int d) 
{
	int day=d;
	for(int i=1; i<m; i++) 
		day += MonthDay(y,i);
	return day;
}
int main()
{
	int y1=2000, m1=1, d1=31;  // cin>>y1>>m1>>d1;
	int y2=2001, m2=12, d2=31;  // cin>>y2>>m2>>d2;
	int day=PassDay(y2,m2,d2);
	for(int y=y1; y<y2; y++)
		day += 365+isLeap(y);
	day -= PassDay(y1,m1,d1);
	cout<<day<<endl;
	return 0;
}






