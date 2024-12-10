/*Description
给你一个数，根据输入对这个数进行加减乘除或是取余操作，其中除操作是结果都为整数的除操作，操作后的结果将替
换该数

Input
第一行输入一个整数N，表示测试数据的组数(1<N=<10)
第二行有两个正整数m，p，分别表示初始数值和操作次数，接下来的p行，每行两个正整数t，k，
分别表示操作类型和操作数，t=1表示加
操作，t=2表示减操作，t=3表示乘操作，t=4表示除操作，t=5表示取余操作，对每种操作对象
都是m和k，格式是m+k，m-k，m*k，m/k，m%k，
1<=t<=5，1<=m，p，k<=100,

Output
每组测试数据只输出一行，即完成所有操作后该数的值，保证该值在int范围内

Sample Input
1
5 5
1 2
2 3
3 4
4 5
5 6
Sample Output
3
*/
#include<iostream>
using namespace std;
int task(int,int,int);
int main(){
    int a[100][2],i,j,n,m,p,o;
    cin>>n;
    for(o=0;o<n;o++)
    {
        cin>>m>>p;
        for(i=0;i<p;i++)
        {
            for(j=0;j<2;j++)
            cin>>a[i][j];
        }
        for(i=0;i<p;i++)
        {
            m=task(a[i][0],a[i][1],m);
        }
        cout<<m<<endl;
    }
    return 0;
}
int task(int x,int k,int m){
    int aux;
    switch (x)
    {
    case 1:aux=m+k;break;
    case 2:aux=m-k;break;
    case 3:aux=m*k;break;
    case 4:aux=m/k;break;
    case 5:aux=m%k;break;
    }
    return aux;
}