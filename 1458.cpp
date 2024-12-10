/*题目描述
Take the XXX是英语语法中常用的一个词组，本题的要求为对于给定的多个单词，给出它的这种词组形式
（保证单词有这种词组形式,单词长度<=20）

输入
输入数据为多个单词，每行表示一个单词。

输出
对于每行给定的单词，输出一行“Take the XXX”形式的词组。

样例输入
bed
lead
样例输出
Take the bed
Take the lead*/
#include <iostream>
using namespace std;
int main()
{
    char a[21];
    int i;
    while (cin.getline(a, 20))
    {
        cout << "Take the ";
        for (i = 0; a[i] != '\0'; i++)
            cout << a[i];
        cout << endl;
        for (i = 0; i < 21; i++)
            a[i] = '\0';
    }
    return 0;
}