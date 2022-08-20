#include<bits/stdc++.h>
using namespace std;
struct Mouse{
	int w; // ����
	int s; // �ٶ�
};
bool operator<(const Mouse &m1,const Mouse&m2){
	return m1.w>m2.w;//�������� 
} 
int GetLIS(Mouse ms[],int n){
	int len=0;
	vector<int> LIS; 
	LIS.push_back(ms[0].s);len++;
	for(int i=1;i<n;i++){
		if(ms[i].s>LIS.back()){
			LIS.push_back(ms[i].s);
			len++;
		}else{
			int k=lower_bound(LIS.begin(),LIS.end(),ms[i].s)-LIS.begin();
			LIS[k]=ms[i].s;
		}
	}
	return len;
}
int main(){
	Mouse ms[]={{6000,13},{6100,21},{500, 20},
			    {1000,40},{1100,30},{6200,20},
			    {8000,14},{6300,12},{2000,19}
	};  
	int n=9;
	sort(ms,ms+9);// �õ��������������
	int k=GetLIS(ms, n);// �����в���"�ٶȵݼ�������"
	cout<<k<<endl;
}
