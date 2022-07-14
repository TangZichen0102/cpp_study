#include <bits/stdc++.h>

using namespace std;
int k;
string s1, s2;
unordered_map<char, int> m = {
    {'0', 0}, 
    {'1', 1}, 
    {'2', 2}, 
    {'3', 3}, 
    {'4', 4}, 
    {'5', 5}, 
    {'6', 6}, 
    {'7', 7}, 
    {'8', 8}, 
    {'9', 9}, 
    {'A', 10}, 
    {'B', 11}, 
    {'C', 12}, 
    {'D', 13}, 
    {'E', 14}, 
    {'F', 15}, 
    {'G', 16}, 
    {'H', 17}, 
    {'I', 18}, 
    {'J', 19}, 
    {'K', 20}, 
    {'L', 21}, 
    {'M', 22}, 
    {'N', 23}, 
    {'O', 24}, 
    {'P', 25}, 
    {'Q', 26}, 
    {'R', 27}, 
    {'S', 28}, 
    {'T', 29}, 
    {'U', 30}, 
    {'V', 31}, 
    {'W', 32}, 
    {'X', 33}, 
    {'Y', 34}, 
    {'Z', 35}, 
};
string s = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
void fun(string a, string b, int k)
{
    a = '0' + a;
    b = '0' + b;
    if (a.size() < b.size())
        swap(a, b);
    string ans="";
    for(int i = 0; i < a.size(); i++) ans += '0';
    int _t = b.size();
    int flag = 0;
    for (int i = 0; i < a.size() - _t; i++) b = '0' + b;
    // cout << a << " " << b << endl;
    for (int i = a.size() - 1; i >= 0; i--) {
        int sum = m[a[i]] + m[b[i]] + flag;
        // cout << sum << " ";
        if(sum >= k) flag = 1;
        else flag = 0;
        ans[i] = s[sum % k];
    }
    int i;
    for(i = 0; ans[i] == '0'; i++);
    for(; i < ans.size(); i++) cout << ans[i];
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("4.in", "r", stdin);
#endif
    cin >> k >> s1 >> s2;
    fun(s1, s2, k);


    // for(auto i :m)
    // {
    //     cout << i.first << " "<< i.second <<endl;
    // }
    return 0;
}