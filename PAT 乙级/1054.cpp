#include <bits/stdc++.h>

using namespace std;
int n, cnt;
string s;
double sum;
bool check(string s) {
    if((s[0] == '+' || s[0] == '-') && s.size() == 1) return false;
    if(s[0] == '+' || s[0] == '-') s = s.substr(1);
    int k = 0, index;
    for(int i = 0; i < s.size(); i++) {
        if(s[i] == '.') k++, index = i + 1;
        else if(s[i] < '0' || s[i] > '9') return false;
    }
    if(k >= 2) return false;
    if(k && s.size() - index > 2) return false;
    return true;
}
int main() {
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> s;
        if(check(s)) {
            double temp = stod(s);
            if(temp >= -1000 && temp <= 1000) {
                sum += temp;
                cnt++;
            }
            else printf("ERROR: %s is not a legal number\n", s.c_str());
        }
        else printf("ERROR: %s is not a legal number\n", s.c_str());
    }
    if(cnt == 0) cout << "The average of 0 numbers is Undefined" << endl;
    else if(cnt == 1) printf("The average of 1 number is %.2lf\n", sum);
    else printf("The average of %d numbers is %.2lf\n",cnt, sum / cnt);
    return 0;
}