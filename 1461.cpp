/*题目描述
给定一个正整数（<=100000)，求该数数位上4的数量。

输入
输入数据为数字，每行一个数字。

输出
对于每行给定的数字，输出一行该数字数位上4的数量。

样例输入
14
44
样例输出
1
2*/
#include <iostream>
using namespace std;
int main()
{
    int x, m;
    int a[5];
    while (cin >> x)
    {
        int k = 0;
        int i = 0;
        while (x != 0)
        {
            a[i] = x % 10;
            x = x / 10;
            i++;
        }
        for (m = 0; m < i; m++)
        {
            if (a[m] == 4)
                k++;
        }
        cout << k << endl;
    }
    return 0;
}