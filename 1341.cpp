/*多组输入，每组第一行输入n，接下来n行，每行五个数字，每个数字用空格分隔，
求明文：每一行的数加起来，再对26取模，得到对应的的字母，0对应a,1对应b
输入示例：
3
1 2 3 4 5
3 2 5 8 4
6 9 8 5 4
输出：
p
w
g*/
#include<iostream>
using namespace std;
int main(){
    const int N=100;
    int n,i,j,a[N][5]={},sum,schar;
    while(cin>>n){;
    for(i=0;i<n;i++)
        for(j=0;j<5;j++)
        cin>>a[i][j];
    for(i=0;i<n;i++)
    {
    sum=0;
        for(j=0;j<5;j++)
        sum=sum+a[i][j];
        
    schar=(sum%26)+'a';
    cout<<char(schar)<<endl;
    }
    }
    return 0;
}