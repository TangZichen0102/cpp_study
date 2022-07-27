#include <bits/stdc++.h>

using namespace std;
vector<int> a(105, 0), b(105, 0), s;
int n, flag;
void insert_sort()
{
    int i, j, temp;
    for(i = 1; i < n; i++) {
        temp = a[i];
        for(j = i; j && a[j - 1] > temp; j--) a[j] - a[j - 1];
        a[j] = temp;
        if(a == b) {
            flag = 1;
            break;
        }
    }
    if(flag) {
        i++;
        if(i < n) {
            temp = b[i];
            for(j = i; j && b[j - 1] > temp; j--) b[j] - b[j - 1];
            b[j] = temp;
        }
    }
}
int main() {
    cin >> n;
    for(int i = 0; i < n; i++) cin >> a[i];
    for(int i = 0; i < n; i++) cin >> b[i];
    s = a;
    insert_sort();
    // cout << flag << endl;
    if(flag == 1) cout << "Insertion Sort" << endl;
    // else cout << "Merge Sort" << endl, merge_sort();
    for(int i = 0; i < n; i++) {
        cout << b[i];
        if(i + 1 != n) cout << " ";
    }
    return 0;
}