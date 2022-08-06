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

void quick_sort(int l, int r)
{
     if (l >= r) return;

    int i = l - 1, j = r + 1, x = a[l + r >> 1];
    while (i < j)
    {
        do i ++ ; while (a[i] < x);
        do j -- ; while (a[j] > x);
        if (i < j) swap(a[i], a[j]);
    }

    quick_sort( l, j);
    quick_sort(j + 1, r);
}

int main()
{
    print(10);
    // qsort(0, 9);
    quick_sort(0,9);
    print(10);
    return 0;
}
