/*题目描述
输入一个乱序的数组，输出其升序排序后的结果
输入
多组样例，
每组样例首先是一个N（1<=n<=20），表示有N个数，之后是N个数，表示给定的乱序的数组。
输出
输出排序后的数组，两个数字之间用一个空格隔开，最后一个数后面不能有空格。
样例输入
3 3 2 1
5 1 5 3 2 7
样例输出
1 2 3
1 2 3 5 7*/
#include<iostream>
using namespace std;
int main(){
    int a[20]={},i,j,n,flag=0;
    while(cin>>n)
    {
        for(i=0;i<n;i++)
        cin>>a[i];
        for(i=0;i<n;i++)
        {
            for(j=0;j<n-i-1;j++)
            if(a[j]>a[j+1])
            {
                int temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
        flag=0;
        for(i=0;i<n;i++)
        {   
            if(flag==1)cout<<' ';
            cout<<a[i];
            flag=1;
        }
        cout<<endl;
    }

}