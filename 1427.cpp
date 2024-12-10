/*题目描述
在银行中存了n元，年利率为a%，计算m年后本金加利息有多少。（结果保留整数）

输入
0<10000, 0<a<10, 整数0<m<50

输出
如题

样例输入
1500 5 40
样例输出
10560*/
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int i, a;
    double rate, n, m, sum;
    while (cin >> n >> a >> m)
    {
        rate = a * 0.01;
        sum = n * pow(1 + rate, m);
        cout << int(round(sum)) << endl;
    }
    return 0;
}