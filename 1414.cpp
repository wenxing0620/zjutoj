/*��Ŀ����
����һ����������飬��������������Ľ��
����
����������
ÿ������������һ��N��1<=n<=20������ʾ��N������֮����N��������ʾ��������������顣
���
������������飬��������֮����һ���ո���������һ�������治���пո�
��������
3 3 2 1
5 1 5 3 2 7
�������
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