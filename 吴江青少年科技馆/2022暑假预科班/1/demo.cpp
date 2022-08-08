
#include <bits/stdc++.h>

using namespace std;

string s;

int isEqual(int result)
{
    int index = s.find_last_of('S');
    cout << (index == result) << endl;
    return index;
}

int main()
{
    int index;
    s = "BANANA";
    isEqual(-1);

    s = "BANASNA";
    isEqual(4);
    s = "BANASSNA";
    index = isEqual(5);

    cout << s.substr(1, index - 1) << endl;
    

    return 0;
}