#include <bits/stdc++.h>

using namespace std;

class Person
{

public:
    int age = 10;

    Person()
    {
        cout << "构造函数调用" << endl;
    }

    ~Person()
    {
        cout << "析构函数调用" << endl;
    }
};

int main()
{
    Person *arr_p = new Person[10];
    delete[] arr_p;
    return 0;
}