/*��Ŀ����
�κ����ֶ�������֮�֣��������Ƕ���0ҲΪ���������ڸ���������x��-100000<=x<=100000),����Ϊ�������������positive������Ϊ�����������negative����

����
��������Ϊ������֣�ÿ�б�ʾһ�����֡�

���
����ÿ�и��������֣�������ĿҪ�������positive����negative��

��������
5
-5
�������
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