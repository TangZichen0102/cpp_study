#include <bits/stdc++.h>

using namespace std;
int n;
struct node {
    int idx, x;
    bool operator<(const node&t) const {
        return idx < t.idx;
    }
};
stack<node> a, b;
priority_queue<node> v;
void merge() {
    string s1, s2;
    cin >> s1 >> s2;
    while (b.size()) {
        v.push(b.top());
        b.pop();
    }
    while (a.size()) {
        v.push(a.top());
        a.pop();
    }
}
void push(int idx) {
    string s;
    int x;
    cin >> s >> x;
    if(s == "A") a.push({idx, x});
    else b.push({idx, x});
}
void pop(int idx) {
    string s;
    cin >> s;
    if(s == "A" && a.size()) {
        cout << a.top().x << endl;
        a.pop();
    }
    else if(s == "B" && b.size()){
        cout << b.top().x << endl;
        b.pop();
    }
    else {
        cout << v.top().x << endl;
        v.pop();
    }
}

int main() {
#ifndef ONLINE_JUDGE
    freopen("2.in", "r", stdin);
#endif
    cin >> n;
    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
        if (s == "push") push(i);
        else if (s == "pop") pop(i);
        else if (s == "merge") merge();
    }
    return 0;
}
/*
#include <bits/stdc++.h>
using namespace std;
int n, v, cnt;
char op[11], x;
struct node
{
  int ts, val;
  bool operator<(const node t) const
  {
    return ts < t.ts;
  }
};
priority_queue<node> qa, qb, qc;
int main()
{
  scanf("%d", &n);
  for (int i = 1; i <= n; i++)
  {
    scanf("%s", op);
    if (op[0] == 'm')
    {
      scanf(" %c %c\n", &x, &x);
      while (qb.size())
      {
        qc.push(qb.top());
        qb.pop();
      }
      while (qa.size())
      {
        qc.push(qa.top());
        qa.pop();
      }
    }
    else if (op[1] == 'u')
    {
      scanf(" %c %d\n", &x, &v);
      if (x == 'A')
        qa.push({i, v});
      else
        qb.push({i, v});
    }
    else
    {
      scanf(" %c\n", &x);
      if (x == 'A' && qa.size())
      {
        printf("%d\n", qa.top().val);
        qa.pop();
      }
      else if (x == 'B' && qb.size())
      {
        printf("%d\n", qb.top().val);
        qb.pop();
      }
      else
      {
        printf("%d\n", qc.top().val);
        qc.pop();
      }
    }
  }
  return 0;
}
*/