#include <bits/stdc++.h>

using namespace std;
int n, a[10005];
struct node {
   int h, m, s;
   bool flag = false;
}maxtime, mintime;
int main() {
    n = 6;
    for(int i = 0; i < n; i++) cin >> a[i];
    sort(a, a + n);
    maxtime = {0, 0, 0}, mintime = {23, 59, 59};
    do {
        int hh = a[0] * 10 + a[1];
        int mm = a[2] * 10 + a[3];
        int ss = a[4] * 10 + a[5];
        if(hh >= 0 && hh <= 23 && mm >= 0 && mm <= 59 && ss >= 0 && ss <= 59) {
            if(hh > maxtime.h) maxtime = {hh, mm, ss}, maxtime.flag = true;
            else if(hh == maxtime.h) {
                if(mm > maxtime.m) maxtime = {hh, mm, ss}, maxtime.flag = true;
                else if(mm == maxtime.m)
                    if(ss > maxtime.s) maxtime = {hh, mm, ss}, maxtime.flag = true;
            }
            if(hh < mintime.h) mintime = {hh, mm, ss}, mintime.flag = true;
            else if(hh == mintime.h) {
                if(mm < mintime.m) mintime = {hh, mm, ss}, mintime.flag = true;
                else if(mm == mintime.m)
                    if(ss < mintime.s) mintime = {hh, mm, ss}, mintime.flag = true;
            }
        }
   }while(next_permutation(a, a + n));
   if(maxtime.flag = false) cout << "ERROR" << endl;
   else printf("%02d:%02d:%02d\n", maxtime.h, maxtime.m, maxtime.s);
   if(mintime.flag = false) cout << "ERROR" << endl;
   else printf("%02d:%02d:%02d", mintime.h, mintime.m, mintime.s);
   return 0;
}