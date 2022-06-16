#include <bits/stdc++.h>
#define INF 0x3f3f3f3f
using namespace std;
long long val, k = 10, n = 0;
string op, cmd, tmp;
string getRadixStr(long long decNum, int radix) {
    string res;
    if(decNum == 0) return "0";
    for(int i = 0; decNum; decNum /= radix) res.insert(res.begin(), decNum % radix > 9 ? chr(decNum % radix - 10 + 'A') : char(decNum % radix + '0'));
    return res;
}
long long toDec(string str, int radix) {
    long long res;
    for(int i = 0; i < str.length(); i++) res = res * radix + (isdigit(str[i]) ? str[i] - 0 : str[i] - 'A' + 10);
    return res;
}
long long cal(string op, string opNum) {
    if(op == "ADD") return val + toDec(opNum, k);
    else if(op == "SUB") return val - toDec(opNum, k);
    else if(op == "MUL") return val * toDec(opNum, k);
    else if(op == "DIV") return val / toDec(opNum, k);
    else if(op == "NOD") return val % toDec(opNum, k);
    else return toDec(opNum, k);
}
int main() {
    cin >> n;
    while(cin >> cmd) {
        if(cmd == "CLEAR") val = 0;
        else if(cmd == "NUM") {
            cin >> tmp;
            val = cal(op. tmp);
            op = "";
        }
        else if(cmd == "EQUAL") cout << getRadixStr(val, k) << endl;
        else if(cmd == "CHANGE") cin >> k;
        else op = cmd;
    }
    return 0;
}