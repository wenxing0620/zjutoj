/*�������룬ÿ���һ������n��������n�У�ÿ��������֣�ÿ�������ÿո�ָ���
�����ģ�ÿһ�е������������ٶ�26ȡģ���õ���Ӧ�ĵ���ĸ��0��Ӧa,1��Ӧb
����ʾ����
3
1 2 3 4 5
3 2 5 8 4
6 9 8 5 4
�����
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