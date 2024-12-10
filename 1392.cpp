/*Description
输入一个数字n, 输出’*’字符的直角三角形

Input
输入多组数据，每组数据占一行，为一个整型数字n <30

Output
输出’*’字符的直角三角形，具体看Sample

Sample Input
3
Sample Output
***
**
*
*/
#include<iostream>
using namespace std;
int main(){
    int n,i,j;
    while(cin>>n)
    {
        for(i=n;i>0;i--)
        {
            for(j=i;j>0;j--)
            cout<<'*';
        cout<<endl;
        }
    }
    return 0;
}