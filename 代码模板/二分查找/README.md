STL库

## binary_search
- 函数返回值 bool

- 注意点

  - 数组已排序

- 使用方法

  ```
  int a[] = [1,3,4,5];
  binary_search(a,a+4,1); // 1(true)
  binary_search(a,a+4,3); // 1(true)
  binary_search(a,a+4,6); // 0(false)
  ```

# 函数简介

`lower_bound( )`函数与`upper_bound( )`函数都是基于二分搜索操作的函数，其操作对象是有序的。`lower_bound( )`函数返回指向第一个不小于给定值的元素的迭代器，`upper_bound( )`函数返回指向第一个大于给定值的元素的迭代器。关于这两个函数更具体的声明和描述，可以查看cppreference网站中有关[ lower_bound( ) ](https://zh.cppreference.com/w/cpp/algorithm/lower_bound)和[upper_bound( )](https://zh.cppreference.com/w/cpp/algorithm/upper_bound)的描述。这里主要介绍一下这两个函数的使用。主要是使用默认的比较函数，以及自己构造比较函数的有关用法。

## lower_bound

- lower_bound() 函数用于在指定区域内查找不小于目标值的第一个元素。也就是说，使用该函数在指定范围内查找某个目标值时，最终查找到的不一定是和目标值相等的元素，还可能是比目标值大的元素。
- 返回值：针指
- 注意点 数组已排序
- 对`lower_bound`函数而言，其默认的比较函数是`operator<`。下面是一个简单的示例。例子中，`data`中存储的是按照非严格递增的方式存储的数据。

```c++
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    vector<int> data = { 1, 2, 4, 5, 5, 6 };
    for (int i = 0; i < 8; i++)
    {
        auto iter = lower_bound(data.begin(), data.end(), i);
        if (iter != data.end())
        {
            cout << "首个不小于" << i << "的元素的索引为：" << distance(data.begin(), iter);
            cout << " 该元素为：" << *iter << '\n';
        }
        else
        {
            cout << "data中不存在不小于" << i << "的元素\n";
        }
    }

}
```

```
首个不小于0的元素的索引为：0 该元素为：1 
首个不小于1的元素的索引为：0 该元素为：1
首个不小于2的元素的索引为：1 该元素为：2
首个不小于3的元素的索引为：2 该元素为：4
首个不小于4的元素的索引为：2 该元素为：4
首个不小于5的元素的索引为：3 该元素为：5
首个不小于6的元素的索引为：5 该元素为：6
data中不存在不小于7的元素 
```

### upper_bound函数

不同于`lower_bound`函数，`upper_bound`函数返回的是指向第一个大于给定值的元素的迭代器。

```
using namespace std;

int main()
{
    vector<int> data = { 1, 2, 4, 5, 5, 6 };
    for (int i = 0; i < 8; i++)
    {
        auto iter = upper_bound(data.begin(), data.end(), i);
        if (iter != data.end())
        {
            cout << "首个大于" << i << "的元素的索引为：" << distance(data.begin(), iter);
            cout << " 该元素为：" << *iter << '\n';
        }
        else
        {
            cout << "data中不存在大于" << i << "的元素\n";
        }
    }

}
```

```
首个大于0的元素的索引为：0 该元素为：1
首个大于1的元素的索引为：1 该元素为：2 
首个大于2的元素的索引为：2 该元素为：4    
首个大于3的元素的索引为：2 该元素为：4       
首个大于4的元素的索引为：3 该元素为：5                
首个大于5的元素的索引为：5 该元素为：6                  
data中不存在大于6的元素                         
data中不存在大于7的元素

```

