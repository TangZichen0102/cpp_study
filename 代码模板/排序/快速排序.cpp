#include <bits/stdc++.h>

using namespace std;
int a[] = {5, 3, 2, 7, 4, 1, 9, 8, 0, 6};

void print(int n)
{
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
    cout << endl;
}

void qsort(int low, int high)
{
    int sol = a[low];
    int i = low, j = high;
    while (i <= j)
    {
        while (i < high)
        {
            if (a[i] >= sol)
                break;
            else
                i++;
        }
        while (j > low)
        {
            if (a[j] <= sol)
                break;
            else
                j--;
        }
        print(10);
        if (i <= j)
        {
            swap(a[i], a[j]);
            i++;
            j--;
        }
    }
    if (low < j)
        qsort(low, j);
    if (i < high)
        qsort(i, high);
}

void quick_sort(int q[],int l, int r)
{
     if (l >= r) return;

    int i = l - 1, j = r + 1, x = q[l + r >> 1];
    while (i < j)
    {
        do i ++ ; while (q[i] < x);
        do j -- ; while (q[j] > x);
        if (i < j) swap(q[i], q[j]);
    }

    quick_sort(q, l, j),quick_sort(q, j + 1, r);
}

int main()
{
    print(10);
    // qsort(0, 9);
    quick_sort(a,0,9);
    print(10);
    return 0;
}
