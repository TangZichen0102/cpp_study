#include<bits/stdc++.h>
using namespace std;
#define N 8
int sum=0;
void Output(int pos[]){
    for(int i=0;i<N;i++){ 
        for(int j=0;j<N;j++)
            if(pos[i]==j)
            	cout<<"X ";
            else
            	cout<<"0 ";
        cout<<endl; 
    }
    cout<<endl;
}
bool pd(int pos[],int ith,int k){//�жϵ�k���Ƿ�Ϸ���λ�� 
	for(int i=0;i<ith;i++)//������0-ith-1���ʺ��λ�� 
		if(pos[i]==k||pos[i]-i==k-ith||pos[i]+i==k+ith)//������ͬһ�л�Խ�����,����֮����ͬ����Խ����غ�,����֮����ͬ���ҶԽ����غ� 
			return false;
	return true;
}
void Solve(int pos[],int ith){//���ھ��ߵ�ith���ʺ��ڵڼ��� 
	if(ith==8){ 
		Output(pos);
		sum++;
	}else{
		for(int i=0;i<N;i++){
			if(pd(pos,ith,i)){
				pos[ith]=i;//��ǵ�ith���ʺ��ڵ�i�� 
				Solve(pos,ith+1);
			}
		}
	}
}
int main(){
	int pos[N]={0};//ÿ���ʺ�ض���ռһ��,�����¼ÿ���ʺ��ڵڼ��� 
	Solve(pos,0);
	cout<<"�ܹ�"<<sum<<"�ְڷŷ�";
	return 0;
}
