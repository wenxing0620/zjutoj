/*题目描述
There are many character strings.You should judge which one is the palindrome(回文) .
输入
There are including several test cases.Every case occupies one line.Every line has one character
string .the end line is 0,and this line needn’t to be processed.
输出
If the Character string is palindrome output “Yes”,else “No”.
样例输入
12321
abbab
0
样例输出
Yes
No
*/
#include<iostream>
using namespace std;
int isPali(char[],int);
int main(){
    char a[100]={};
    int i=0,j;
    while(cin.getline(a,100))
    {
        j=0;
        i++;
        for(j=0;a[j]!='\0';j++);
        if(isPali(a,j)==1)cout<<"Yes"<<endl;
        else if(isPali(a,j)==0)cout<<"No"<<endl;
        else continue;
        for(int i=0;i<100;i++)
        a[i]='\0';
    }
    return 0;
}
int isPali(char a[],int j){
    int i,k;
    if(j==1&&a[0]=='0')return -1;
    for(i=0;i<=j/2;i++)
    {
        if(a[i]!=a[j-i-1])
        return 0;
    }
    return 1;
}