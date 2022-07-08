#include <bits/stdc++.h>

using namespace std;

struct IP
{
    int p1, p2, p3, p4;

    void print()
    {
        printf("%d.%d.%d.%d\n", p1, p2, p3, p4);
    }

    operator==(IP a)
    {
        return p1 == a.p1 &&
               p2 == a.p2 &&
               p3 == a.p3 &&
               p4 == a.p4;
    }
};

bool isEquel(IP a, IP b)
{
    return b.p1 == a.p1 &&
           b.p2 == a.p2 &&
           b.p3 == a.p3 &&
           b.p4 == a.p4;
}

IP read()
{
    IP a;
    scanf("%d.%d.%d.%d", &a.p1, &a.p2, &a.p3, &a.p4);
    return a;
}

IP doWD(IP a, IP b)
{
    IP wd;
    wd.p1 = a.p1 & b.p1;
    wd.p2 = a.p2 & b.p2;
    wd.p3 = a.p3 & b.p3;
    wd.p4 = a.p4 & b.p4;
    return wd;
}

int main()
{

#ifndef ONLINE_JUDGE
    freopen("ip.in", "r", stdin);
#endif

    IP a = read();
    IP mask = read();
    // a.print();
    // mask.print();

    IP wd = doWD(a, mask);
    // wd.print();

    int n;
    cin >> n;
    while (n--)
    {
        IP pp = read();
        IP wd2 = doWD(pp, mask);

        cout << (isEquel(wd, wd2)?"INNER":"OUTER") << endl;
    }

    return 0;
}