#include<stdio.h>
#include <string.h>
    int main()
{
    int n, sum, v;
    int s[100];
    int i, j;
    while (scanf("%d", &n) != EOF && n != 0)
    {
        sum = 0;
        v = 0;
        j = 0;
        for (i = 0; i < n; i++) {
            scanf("%d", &s[i]);
            sum = sum + s[i];
        }
        v = sum / n;
        for (i = 0; i < n - 1; i++) {
            if (s[i] < v) {
                s[i + 1] = s[i + 1] - (v - s[i]);
                j++;
            }
            else if (s[i] > v) {
                s[i + 1] = s[i + 1] + (s[i] - v);
                j++;
            }
        }
        printf("%d\n", j);
    }
    return 0;
}