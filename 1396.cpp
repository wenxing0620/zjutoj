/*题目描述
给你一堆点，点与点之间有无向边，问是否存在欧拉回路，假设所有点都在一个连通块
输入
有多组案例，每组第一行有两个数n,m，n <= 15表示点数，m <= n*(n-1)/2表示边数
接下来有m行，每行有两个数字 1 <= a,b <= n (a != b)
输出
若存在欧拉回路，输出”Yes”
否则输出”No”
样例输入
3 3
1 2
2 3
3 1
4 4
1 2
2 3
1 3
1 4
样例输出
Yes
No
*/
#include<iostream>
using namespace std;
int main(){
    int a[16][16]={},n,m,i,j,dig[16]={},k=0,sum;
    while(cin>>n>>m)
    {
        k=0;
        while (k<m)
        {
            k++;
            cin>>i>>j;
            a[i][j]=1;
            a[j][i]=1;
        }
        for(i=1;i<=n;i++)
        {   
            for(j=1;j<=n;j++)
            {
                if(a[i][j]==1)
                dig[i]++;
            }
        }
        sum=0;
        for(i=1;i<=n;i++)
        {   
            if(dig[i]%2==0)
            {
                sum++;
            }
            
        }
        if(sum==n)cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
    return 0;
}
