#include <iostream>

using namespace std;
#define N 10
int vis[N];
string arr;
char st[N];
int len;

void dfs(int u) {
    int i;
    if (u > len - 1) {
        puts(st);
        return;
    }
    else
        for (i = 0; i < len; i++)
            if (vis[i] == 0)
            {
                vis[i] = 1;
                st[u] = arr[i];
                dfs(u + 1);
                vis[i] = 0;
            }
    return;
}
int main() {
    len = arr.size();
    dfs(0);
    return 0;
}