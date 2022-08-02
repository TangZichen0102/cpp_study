#include <bits/stdc++.h>

using namespace std;

int main() {
    string s;
    vector<string> w;
    for(int i = 0; i < 26; i++) {
        for(int j = 0; j < 7; j++) {
            getline(cin, s);
            w.push_back(s);
        }
    }
    getline(cin, s);
    int n = s.size();
    vector<string> words;
    for(int i = 0; i < n; ){
        if(!isupper(s[i])) {
            i++;
            continue;
        }
        int j = i;
        while(j < n && isupper(s[j])) j++;
        words.push_back(s.substr(i, j - i));
        i = j;
    }
    n = words.size();
    for(int i = 0; i < n; i++) {
        auto word = words[i];
        for(int k = 0; k < 7; k++) {
            for(int j = 0; j < word.size(); j++) {
                auto u = word[j] - 'A';
                if(j) cout << " ";
                cout << w[u * 7 + k];
            }
            cout << endl;
        }
        if(i != n - 1) cout << endl;
    }
    return 0;
}