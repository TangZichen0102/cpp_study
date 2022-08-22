#include <bits/stdc++.h>
using namespace std;
int n, m, k, tUid, tPid, ts;
struct node
{
  int uid, tot = 0;
  unordered_map<int, int> sMap;
  bool operator<(const node t) const
  {
    if (tot == t.tot)
      return uid < t.uid;
    return tot > t.tot;
  }
};
unordered_set<int> player;
set<int> problem;
unordered_map<int, unordered_map<int, int>> tMap;
vector<node> rankInfo;
int main()
{
  scanf("%d", &n);
  for (int i = 1; i <= n; i++)
  {
    scanf("%d", &tUid);
    player.insert(tUid);
  }
  scanf("%d", &m);
  for (int i = 1; i <= m; i++)
  {
    scanf("%d", &tPid);
    problem.insert(tPid);
  }
  scanf("%d", &m);
  for (int i = 1; i <= m; i++)
  {
    scanf("%d%d%d", &tUid, &tPid, &ts);
    if (player.count(tUid) && problem.count(tPid))
      tMap[tUid][tPid] = ts;
  }
  for (auto &&u : tMap)
  {
    node tmp;
    tmp.uid = u.first;
    for (auto &&p : u.second)
    {
      tmp.tot += p.second;
      tmp.sMap[p.first] = p.second;
    }
    rankInfo.push_back(tmp);
    player.erase(u.first);
  }
  for (auto &&i : player)
    rankInfo.push_back({i, INT_MIN});
  sort(rankInfo.begin(), rankInfo.end());
  for (int i = 0; i < rankInfo.size(); i++)
  {
    printf("#%d %d ", i + 1, rankInfo[i].uid);
    if (rankInfo[i].tot != INT_MIN)
      printf("%d ", rankInfo[i].tot);
    else
      printf("\\ ");
    for (auto &&pid : problem)
      if (rankInfo[i].tot != INT_MIN && rankInfo[i].sMap.count(pid))
        printf("%d ", rankInfo[i].sMap[pid]);
      else
        printf("\\ ");
    puts("");
  }
  return 0;
}