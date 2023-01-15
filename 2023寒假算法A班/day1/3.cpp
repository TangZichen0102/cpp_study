#include <bits/stdc++.h>

using namespace std;
unordered_map<char, string> um = {{'a', "1"},
                               {'b', "2"},
                               {'c', "3"},
                               {'d', "4"},
                               {'e', "5"},
                               {'f', "6"},
                               {'g', "7"},
                               {'h', "8"},
                               {'i', "9"},
                               {'j', "10"},
                               {'k', "11"},
                               {'l', "12"},
                               {'m', "13"},
                               {'n', "14"},
                               {'o', "15"},
                               {'p', "16"},
                               {'q', "17"},
                               {'r', "18"},
                               {'s', "19"},
                               {'t', "20"},
                               {'u', "21"},
                               {'v', "22"},
                               {'w', "23"},
                               {'x', "24"},
                               {'y', "25"},
                               {'z', "26"}};
int main() {
    string s;           
    cin >> s;
    long long k;
    cin >> k;
    string str = "";
    for(int i = 0; i < s.size(); i++)  str += um[s[i]];
    for(int i = 0; i < k; i++) {
        if(str.size() == 1) {
            cout << str;
            return 0;
        }
        int sum = 0;
        for(int j = 0; j < str.size(); j++) sum += str[j] - '0';
        str = to_string(sum);
    }
    cout << str;
    return 0;
}