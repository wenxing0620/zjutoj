/*��Ŀ����
��n�����֣�Ȼ���������x�������n�������д���x��������С��x������������x�ĺ��ԡ�

����
��������Ϊ�������ݡ���һ������n��x���ڶ�������n�����֣�n<=1000,��������<=100000����Ϊ������).

���
��һ���������x���������ڶ������С��x��������ÿ�������Ҫ�������һ�����С�

��������
3 2
1 2 3
4 3
5 5 5 5
�������
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