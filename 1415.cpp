/*��Ŀ����
���ڸ�����һ�����֣�����ĳһ�������Ƿ������С�
����
����������
ÿ������������һ��N��1<=N<=100������ʾ��������N�����֡�
������һ����N��������ʾ���������顣
�����һ��M����ʾҪ��ѯ������
���
��Ҫ��ѯ�������������У������YES���������NO
��������
3
1 2 3
2
4
1 3 5 7
6
�������
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