/*��Ŀ����
����һ����������<=100000)���������λ��4��������

����
��������Ϊ���֣�ÿ��һ�����֡�

���
����ÿ�и��������֣����һ�и�������λ��4��������

��������
14
44
�������
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