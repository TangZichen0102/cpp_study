#include<bits/stdc++.h>
using namespace std;

int main(){
	int w[7];
	int cnt=0;
	while(1)
	{
		cnt++;
		bool a[120001]={},flag=true;
		a[0]=true;
		int n=0;
		for(int i=1; i<=6; i++)
		{
			cin>>w[i];
			n += i*w[i];
			if(w[i]!=0)
				flag=false;
		}
		if(flag)
			return 0;
		if(n%2==1)
		{
			printf("Collection #%d:\n",cnt);
			cout<<"Can't be divided."<<endl<<endl;
			continue;
		}
		for(int i=1; i<=6; i++)
			for(int j=1; j<=w[i]; j++)
				for(int k=n/2; k>=i; k--)
					if(a[k-i])
						a[k]=true;
		printf("Collection #%d:\n",cnt);
		if(a[n/2])
			cout<<"Can be divided."<<endl<<endl;
		else
			cout<<"Can't be divided."<<endl<<endl;
	}
	return 0;
}
