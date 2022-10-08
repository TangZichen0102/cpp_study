#include <bits/stdc++.h>
using namespace std;
typedef long long LL;

class Printer
{
public:
    static Printer *getInstance()
    {
        return _instance;
    }

    void Print(string s)
    {
        cout << s << ",第" << printCnt << "次打印" << endl;
        printCnt++;
    }

private:
    Printer() { cout << "Printer" << endl; }
    Printer(const Printer &p) {}
    static Printer *_instance;
    int printCnt = 1;
};
Printer *Printer::_instance = new Printer;

int main()
{
    cout << "Main 函数开始" << endl;

    Printer *p1 = Printer::getInstance();
    p1->Print("荔枝证明");
    p1->Print("荔枝证明2");
    Printer *p2 = Printer::getInstance();

    p2->Print("荔枝证明4");

    int n;
    cin >> n;
    return 0;
}