#include<bits/stdc++.h>
using namespace std;
const int N=130;
int a[N];
int main()
{
	freopen("code.in","r",stdin);
	freopen("code.out","w",stdout);
	for(char i='A';i<='F';i++) a[i]=10+i-'A';
	string str;
	int ans1=0,ans2=0;
	while(cin>>str){
		int num=0;
		for(int i=0;str[i];i++){
			if(isdigit(str[i])){
				num=num*16+str[i]-'0';
			}
			else num=num*16+a[str[i]];
		}
		if(num>=48 && num<=57) ans2++;
		else if((num>=65 && num<=90) || (num>=97 && num<=122)) ans1++;
	}
	cout<<ans1<<' '<<ans2<<endl;
	return 0;
}
