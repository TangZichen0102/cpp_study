#include <iostream>
#include <algorithm>
using namespace std;

float f(float x)
{
	return 3*x*x*x-5*x*x+10*x-50;
}
// ��֪f(min)��f(max)��� ���󷽳̵ĸ� 
float Solve(float min, float max)
{
	// �۰�	
	while()
	{
		float mid=(min+max)/2 ;
		if( fabs(f(mid))  <0.001 )
			return mid;
		if()
			;
		else
			; 
	} 
	
}
int main()
{
	float root=Solve(-10,10);
	cout<<root<<endl;    // 2.????
	cout<<f(root)<<endl;   // 0.000
    return 0;
}
