#include <bits/stdc++.h>

using namespace std;

int main()
{
    string str;
    cin >> str;

    int cnt = 0;
    for (int i = 0; i < str.size(); ++i)
    {
        if (str[i] == '(')
            cnt++;
        else if (str[i] == ')')
            cnt--;
        if (cnt < 0)
        {
            str.insert(i, "(");
            i++;
            cnt = 0;
        }
    }

    if (cnt > 0)
    {
        for (int i = 0; i < cnt; ++i)
        {
            str.push_back(')');
        }
    }

    cout << str;
    return 0;
}

// #include <bits/stdc++.h>

// using namespace std;
// stack<char> s;
// int main() {
//     string a;
//     getline(cin, a);
//     for(int i = 0; i < s.size(); i++) s.push(a[i]);
//     while(!s.empty()) {
//         char c1 = s.top();
//         s.pop();
//         if(s.empty()) {
//             if(c1 == ')') cout << '(' << c1;
//             else cout << c1 << ')';
//             return 0;
//         }
//         char c2 = s.top();
//         if(c1 == ')' && c2 == ')') cout << '(' << c1;
//         if(c1 == '(' && c2 == '(') cout << c1 << ')';
//         else cout << '(' << ')';
//     }
//     return 0;
// }