#include <bits/stdc++.h>
using namespace std;

string s;
int vis[105];

int cal(int pos)
{
  int cnt = 0;
  for(int i=pos;i< s.size();i++)
  {
    if(vis[i])
      continue;
    vis[i] = true;

    if(s[i] == '(')
      cnt+= cal(i+1);
    else if (s[i] == '|')
      return max(cnt , cal(i+1));
    else if (s[i] == ')')
      return cnt;
    else
      cnt++;
  }
  return cnt;
}


int main(){
  cin >> s;
  cout << cal(0);
  return 0;
}








