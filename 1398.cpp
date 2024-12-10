/*Description
给定长和宽，请输出一个长方形，并a-z按顺序填充。

Input
多组数据，读到文件末
每组数据输入a，b代表宽和高,0<a,b<=20

Output
请输出以字符为填充的长方形，每个图案之间空一行。

Sample Input
2 3
4 2
Sample Output
ab
cd
ef

abcd
efgh*/
#include<iostream>
using namespace std;
int main(){
    int a,b,i,j,c=97;
    while(cin>>a>>b)
    {
        c=97;
        for(i=0;i<b;i++)
        {
            for(j=0;j<a;j++)
            {
                cout<<char(c);
                c++;
            }
        cout<<endl;
        }
        cout<<endl;
        
    }
    return 0;
}