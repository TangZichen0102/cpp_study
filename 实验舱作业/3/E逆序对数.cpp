#include <bits/stdc++.h>
using namespace std;

int n, cnt;
int v[100005],tmp[100005];


void mergSort(int q[], int l, int r)
{
    if (l >= r)
        return;

    int mid = l + r >> 1;
    mergSort(q, l, mid), mergSort(q, mid + 1, r);

    int k = 0, i = l, j = mid + 1;
    while (i <= mid && j <= r)
    {
        if(q[i]<=q[j])  tmp[k++] = q[i++];
        else tmp[k++] = q[j++];
    }
    while(i<=mid) tmp[k++] = q[i++];
    while(j<=r) tmp[k++] = q[j++];

    for(i=l,j=0;i<=r;i++,j++) q[i] = tmp[j];
}

int main()
{
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    return 0;
}