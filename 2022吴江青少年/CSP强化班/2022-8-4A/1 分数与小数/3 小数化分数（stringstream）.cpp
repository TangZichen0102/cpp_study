#include <iostream>
#include <sstream>
#include <vector>
#include <cmath>
using namespace std;

stringstream f;//string->int

int gcd(int a, int b) 
{
	if (b == 0)return a + b;
	else return gcd(b, a % b);
}
int main() {
	int a, b; //分子分母
	int point;
	int delong = 0; //小数部分长度
	string str;
	cin >> str;
	point = str.find(".");
	if (point == -1)
	{
		cout << str;	return 0;
	} 
	delong = str.size() - point - 1;
	
	if (str.substr(0, point) != "0")//输出整数部分
		cout << str.substr(0, point) << " ";
	f << str.substr(point + 1, delong);//转换
	f >> a;
	f.clear();
	b = pow(10, delong);
	cout << a / gcd(a, b) << "/" << b / gcd(a, b);
}
