/*��Ŀ����
��n����a1-an��������ǵ�ƽ��������������ȡ����

����
����0<n<100��0<an<1000

���
���ƽ����

��������
5
1 2 3 4 5
�������
3*/
#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int i,n,sum=0;
    double a[100]={},avg;
    while(cin>>n)
    {
    sum=0;
    for(i=0;i<n;i++)
    cin>>a[i];
    for(i=0;i<n;i++)
    sum=sum+a[i];
    avg=round(sum/double(n));
    cout<<avg<<endl;
    }
    return 0;
}