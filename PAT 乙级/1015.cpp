#include <bits/stdc++.h>

using namespace std;
struct node{
    int nums, de, cai;
};
int cmp(node a, node b) {
    if((a.de + a.cai) != (b.de + b.cai)) return (a.de + a.cai) > (b.de + b.cai);
    else if(a.de != b.de) return a.de > b.de;
    else return a.nums < b.nums;
}
int main() {
    int n, l, h;
    cin >> n >> l >> h;
    node temp;
    vector<node> v[4];
    int cnt = n;
    for(int i = 0; i < n; i++) {
        cin >> temp.nums >> temp.de >> temp.cai;
        if(temp.de < l || temp.cai < l) cnt--;
        else if(temp.de >= h && temp.cai >= h) v[0].push_back(temp);
        else if(temp.de >= h && temp.cai < h) v[1].push_back(temp);
        else if(temp.de < h && temp.cai < h && temp.de >= temp.cai) v[2].push_back(temp);
        else v[3].push_back(temp);
    }
    cout << cnt << endl;
    for(int i = 0; i < 4; i++) {
        sort(v[i].begin(), v[i].end(), cmp);
        for(int j = 0; j < v[i].size(); j++) 
            cout << v[i][j].nums << " " << v[i][j].de << " " << v[i][j].cai << endl;
    }   
    return 0;
}