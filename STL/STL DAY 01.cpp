#include <bits/stdc++.h>

using namespace std;

class MyPrint : public binary_function<int, int, void> {
public:
    void operator()(int val, int start) const {
        cout << "val = " << val << " start = " << start << " sum = " << val + start << endl;
    }
};

class GreaterThanFive : public unary_function<int, bool> {
public:
    bool operator()(int val) const {
        return val > 5;
    }
};

void test01() {
    vector<int> v;
    v.reserve(10);
    cout << "请输入起始累加值：" << endl;
    int begin;
    cin >> begin;
    for (int i = 0; i < 10; i++) v.push_back(i);
    for_each(v.begin(), v.end(), bind2nd(MyPrint(), begin));
}

void test02() {
    vector<int> v;
    v.reserve(10);
    for (int i = 0; i < 10; i++) v.push_back(i);
    auto pos = find_if(v.begin(), v.end(), not1(bind2nd(greater<int>(), 5)));
    if (pos != v.end()) cout << "找到大于5的值为:" << *pos << endl;
    else cout << "未找到......" << endl;
}

int main() {
    test01();
    test02();
    return 0;
}
