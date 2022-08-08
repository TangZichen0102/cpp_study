#include <bits/stdc++.h>

using namespace std;
unordered_map<int, int> m = {{2, 4}, 
                             {4, 5},
                             {5, 1},
                             {1, 3},
                             {3, 2}
};
unordered_map<int, int> m2 = {{1, 2}, 
                              {2, 5}, 
                              {5, 3}, 
                              {3, 4},
                              {4, 1}
};
//金，木，水，火，土
// 1， 2， 3，4， 5 
//2->4   4->5   5->1  1->3   3->2 

//1->2   2->5   5->3  3->4   4->1
int main() {
    int n;
    cin >> n;
    for(int i = 0; i < n; i++) {
        int a, b;
        cin >> a >> b;
        if(m[a] == b) cout << a << " sheng " << b << endl;
        else if(m[b] == a) cout << b << " sheng " << a << endl;
        else if(m2[a] == b) cout << a << " ke " << b << endl;
        else if(m2[b] == a) cout << b << " ke " << a << endl;
    }
    return 0;
}