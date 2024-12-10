/*题目描述
给n个数字，然后给个数字x，输出这n个数字中大于x的数量和小于x的数量，等于x的忽略。

输入
输入数据为多组数据。第一行输入n和x，第二行输入n个数字（n<=1000,所有数字<=100000，且为正整数).

输出
第一行输出大于x的数量，第二行输出小于x的数量。每组输出后都要额外输出一个空行。

样例输入
3 2
1 2 3
4 3
5 5 5 5
样例输出
1
1

4
0*/
#include <iostream>
using namespace std;
int main()
{
    int n, x, i;
    while (cin >> n >> x)
    {
        int max = 0, min = 0;
        int a[1000] = {};
        for (i = 0; i < n; i++)
            cin >> a[i];
        for (i = 0; i < n; i++)
        {
            if (a[i] > x)
                max++;
            else if (a[i] < x)
                min++;
        }
        cout << max << endl
             << min << endl;
        cout << endl;
    }
    return 0;
}