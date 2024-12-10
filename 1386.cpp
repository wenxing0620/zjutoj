/*Description
给你两个字符串，主要把这两个字符串前后连接好输出就可以了

Input
第一行输入一个整数N，表示测试数据的组数(1<N=<20)
每组数据只有一行，是两个字符串，中间有空格隔开，每个字符串都是小写字母组成的，每个字符串长度不超过100

Output
输出一行表示连接后的字符串

Sample Input
1
acm zjut
Sample Output
acmzjut*/
#include<iostream>
using namespace std;
int main(){
    char a[20][202]={};
    int i,j,k,n;
    cin>>n;
    cin.ignore();
    for(i=0;i<n;i++)
    {
        cin.getline(a[i],202);
    }
    for(i=0;i<n;i++)
    {
        j=0;
        k=0;
        while(a[i][k]!='\0')
        {
            if(a[i][k]!=' ')
            {
                a[i][j++]=a[i][k];
            }
        k++;
        }
    a[i][j]='\0';
    }
    for(i=0;i<n;i++)
    {
        for(j=0;a[i][j]!='\0';j++)
        cout<<a[i][j];
    cout<<endl;
    }
    return 0;

}