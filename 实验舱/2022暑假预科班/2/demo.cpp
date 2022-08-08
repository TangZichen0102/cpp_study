#include <bits/stdc++.h>

using namespace std;

int main(){

    set<int> dp;
    dp.insert(6);
    dp.insert(9);

    cout << *dp.begin();
    cout << dp.pop_first();
}