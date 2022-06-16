#include <bits/stdc++.h>

using namespace std;

struct students {
    int id, Chinese, score;
};

bool cmp(students d1, students d2) {
    if (d1.score > d2.score) return true;
    else if (d1.score < d2.score) return false;
    else {
        if (d1.Chinese > d2.Chinese) return true;
        else if (d1.Chinese < d2.Chinese) return false;
        else
            if (d1.id < d2.id) return true;
            else return false;
    }
}
students d[305];
int main()
{
    int n, a, b, c;
    cin >> n;
    for (int i = 1; i <= n; ++i) {
        cin >> a >> b >> c;
        d[i].id = i;
        d[i].Chinese = a;
        d[i].score = a + b + c;
    }
    for (int i = 2; i <= n; ++i)
        for (int j = i; j > 1; --j)
            if (cmp(d[j], d[j - 1])) swap(d[j], d[j - 1]);
            else break;
    for (int i = 1; i <= 5; ++i) cout << d[i].id << ' ' << d[i].score << endl;
    return 0;
}