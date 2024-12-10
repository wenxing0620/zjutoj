/*Description
判断一个正整数能不能写成2的k次，k是整数

Input
第一行输入一个整数N，表示测试数据的组数(1<N=<20)
每组数据只有一个数M（1<=M<=1000）

Output
每组输出一行，如果M可以写成2的k次就输出Yes，否则输出No

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
    // 检查m是否为正数且只有一个二进制位为1
    return m > 0 && (m & (m - 1)) == 0;
}

int main() {
    int N;
    cin >> N; // 读取测试数据的组数

    for (int i = 0; i < N; ++i) {
        int M;
        cin >> M; // 读取每个数

        if (isPowerOfTwo(M)) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }

    return 0;
}