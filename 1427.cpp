/*��Ŀ����
�������д���nԪ��������Ϊa%������m��󱾽����Ϣ�ж��١����������������

����
0<10000, 0<a<10, ����0<m<50

���
����

��������
1500 5 40
�������
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