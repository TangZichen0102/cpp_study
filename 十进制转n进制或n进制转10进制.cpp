#include <bits/stdc++.h>

using namespace std;
//1
string dp = "0123456789abcdefghijklmnopqrstuvwxyz";
string _Itoa(int n, int m) {
    string _s;
    do{
        int t = n % m;
        _s += dp[t];
        n /= m;
    }while(n != 0);
    reverse(_s.begin(), _s.end());
    return _s;
}
//2
unordered_map<char, int> Map = {{'1', 1}, 
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
                                {'Z', 35}};
int Itoa2(int n, string s) {
    int sum = 0, res = 0;
    for(int i = s.size() - 1; i >= 0; i--) {
        sum += Map[s[i]] * pow(n, res);
        res++;
    }
    return sum;
}
int main() {
    int n, m;
    cin >> n >> m;
    cout << _Itoa(n, m);
    int n2;
    string s;
    cin >> n2 >> s;
    cout << Itoa2(n2, s);
    return 0;
}