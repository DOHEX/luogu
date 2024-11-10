#include <bits/stdc++.h>
using namespace std;
bool check(int x)
{             // 利用布尔值判断
    string s; // 读入字符串
    while (x)
    {                            // 写一个字符转数字的循环
        s += (char)x % 10 - '0'; // 将x的个位数转换为数字类型
        x /= 10;                 // 将x原本的值减去个位数
    }
    int m = s.size(); // 计算字符串s的位数
    if (m % 2 == 1)
        return false;               // 如果位数是奇数，则返回0
    int sum1 = 0, sum2 = 0;         // 字符串x分成两部分
    for (int i = 0; i < m / 2; i++) // 为了把m分成两部分，所以用了m/2
    {
        sum1 += s[i] - '0';         // 将字符串左半部分转换成数字类型
        sum2 += s[i + m / 2] - '0'; // 将字符串左半部分转换成数字类型
    }
    return sum1 == sum2;
}
int main()
{
    int cnt = 0; // 定义并初始化符合题目要求的数，便于下面计数
    for (int i = 1; i <= 100000000; i++)
    {                 // 枚举从1到100000000
        if (check(i)) // 如果数字i符合cheak函数
        {
            cnt++; // 如果符合函数要求，则计数
        }
    }
    cout << cnt; // 输出符合要求的数有多少个
    return 0;
}
