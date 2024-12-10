/*题目描述
任何数字都有正负之分，假设我们定义0也为正数，对于给定的数字x（-100000<=x<=100000),若它为正数，就输出“positive”，若为负数，输出“negative”。

输入
输入数据为多个数字，每行表示一个数字。

输出
对于每行给定的数字，根据题目要求输出“positive”或“negative”

样例输入
5
-5
样例输出
positive
negative*/
#include <iostream>
using namespace std;
int main()
{
    int x;
    while (cin >> x)
    {
        if (x >= 0)
            cout << "positive" << endl;
        else
            cout << "negative" << endl;
    }
    return 0;
}