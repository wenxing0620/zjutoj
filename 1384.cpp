/*Description
�ж�һ���������ܲ���д��2��k�Σ�k������

Input
��һ������һ������N����ʾ�������ݵ�����(1<N=<20)
ÿ������ֻ��һ����M��1<=M<=1000��

Output
ÿ�����һ�У����M����д��2��k�ξ����Yes���������No

Sample Input
3
2
5
16
Sample Output
Yes
No
Yes*/
#include <iostream>
#include <cmath>
using namespace std;

bool isPowerOfTwo(int m) {
    // ���m�Ƿ�Ϊ������ֻ��һ��������λΪ1
    return m > 0 && (m & (m - 1)) == 0;
}

int main() {
    int N;
    cin >> N; // ��ȡ�������ݵ�����

    for (int i = 0; i < N; ++i) {
        int M;
        cin >> M; // ��ȡÿ����

        if (isPowerOfTwo(M)) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }

    return 0;
}