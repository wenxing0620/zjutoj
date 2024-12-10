/*题目描述
有n个数a1-an，求出他们的平均数（四舍五入取整）

输入
整数0<n<100，0<an<1000

输出
输出平均数

样例输入
5
1 2 3 4 5
样例输出
3*/
#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int i,n,sum=0;
    double a[100]={},avg;
    while(cin>>n)
    {
    sum=0;
    for(i=0;i<n;i++)
    cin>>a[i];
    for(i=0;i<n;i++)
    sum=sum+a[i];
    avg=round(sum/double(n));
    cout<<avg<<endl;
    }
    return 0;
}