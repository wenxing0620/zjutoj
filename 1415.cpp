/*题目描述
对于给定的一组数字，查找某一个数字是否在其中。
输入
多组样例。
每组样例首先是一个N（1<=N<=100），表示接下来有N个数字。
接下来一行是N个数，表示给定的数组。
最后是一个M，表示要查询的数。
输出
若要查询的数字在数组中，则输出YES，否则输出NO
样例输入
3
1 2 3
2
4
1 3 5 7
6
样例输出
YES
NO*/
#include<iostream>
using namespace std;
int target(int a[],int,int);
int main(){
    int a[100]={},n,m,i;
    while(cin>>n)
    {
        for(i=0;i<n;i++)
        cin>>a[i];
        cin>>m;
        if(target(a,n,m)==1)cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
    return 0;
}
int target(int a[],int n,int m){
    for(int i=0;i<n;i++)
    {
        if(a[i]==m)return 1;
    }
    return 0;
}