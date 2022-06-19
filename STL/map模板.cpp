#include <bits/stdc++.h>

using namespace std;

int main()
{
    map<int, int> tong1; //默认是以first从小到大排序
    tong1[1] = 10;
    tong1[10] = 10;
    for (auto a : tong1)
    {
        cout << a.first << " " << a.second << endl;
    }
    // cout 输出
    // 1 10
    // 10 10

    cout << tong1.begin()->first << " " << (*tong1.begin()).second<< endl; //输出第一个元素

    map<int, int, greater<int>> tong2; //以大到小排序
    tong2[1] = 10;
    tong2[10] = 10;
    for (auto a : tong2)
    {
        cout << a.first << " " << a.second << endl;
    }
    // cout 输出
    // 10 10
    // 1 10

    return 0;
}