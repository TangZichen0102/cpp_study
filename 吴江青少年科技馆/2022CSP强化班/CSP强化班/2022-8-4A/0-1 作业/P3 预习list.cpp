#include <bits/stdc++.h>

using namespace std;

void Output(list<int> &l);

int main()
{
	list<int> l1(5,2),l2(3,1),l3(4,3),t,tt=l1;
	Output(l1);
	Output(l2);
	Output(l3);
	
	l1.push_front(20);
	Output(l1);
	
	l1.push_back(18);
	Output(l1);
	
	l1.sort();
	Output(l1);
	
	t=l2;
	l1.merge(l2);
	l2=t;
	Output(l1);
	
	t=l3;
	l1.merge(l3);
	l3=t;
	Output(l1);
	
	l1.swap(tt);
	Output(l1);
	
	l1.insert(l1.begin(), 5);
	Output(l1);
	
	l1.splice(l1.end(), l2);
	Output(l1);
	
	l1.splice(l1.begin(), l3);
	Output(l1);
	
	l1.push_front(4);
	Output(l1);
	
	l1.remove(2);
	Output(l1);
	
	l1.sort();
	Output(l1);
	
	l1.unique();
	Output(l1);
	
	return 0;
}

//void out(int n){cout<<n<<" ";}
void Output(list<int> &l)
{
	//迭代器
	for(list<int>::iterator it=l.begin(); it!=l.end(); it++)
		cout<<*it<<" ";
	
	//for_each语句，out是如上的自定义函数
//	for_each(l.begin(),l.end(),out);
	
	cout<<endl;
}
