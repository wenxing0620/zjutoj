/*��Ŀ����
Take the XXX��Ӣ���﷨�г��õ�һ�����飬�����Ҫ��Ϊ���ڸ����Ķ�����ʣ������������ִ�����ʽ
����֤���������ִ�����ʽ,���ʳ���<=20��

����
��������Ϊ������ʣ�ÿ�б�ʾһ�����ʡ�

���
����ÿ�и����ĵ��ʣ����һ�С�Take the XXX����ʽ�Ĵ��顣

��������
bed
lead
�������
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