/*Description
����һ�����������������������мӼ��˳�����ȡ����������г������ǽ����Ϊ�����ĳ�������������Ľ������
������

Input
��һ������һ������N����ʾ�������ݵ�����(1<N=<10)
�ڶ���������������m��p���ֱ��ʾ��ʼ��ֵ�Ͳ�����������������p�У�ÿ������������t��k��
�ֱ��ʾ�������ͺͲ�������t=1��ʾ��
������t=2��ʾ��������t=3��ʾ�˲�����t=4��ʾ��������t=5��ʾȡ���������ÿ�ֲ�������
����m��k����ʽ��m+k��m-k��m*k��m/k��m%k��
1<=t<=5��1<=m��p��k<=100,

Output
ÿ���������ֻ���һ�У���������в����������ֵ����֤��ֵ��int��Χ��

Sample Input
1
5 5
1 2
2 3
3 4
4 5
5 6
Sample Output
3
*/
#include<iostream>
using namespace std;
int task(int,int,int);
int main(){
    int a[100][2],i,j,n,m,p,o;
    cin>>n;
    for(o=0;o<n;o++)
    {
        cin>>m>>p;
        for(i=0;i<p;i++)
        {
            for(j=0;j<2;j++)
            cin>>a[i][j];
        }
        for(i=0;i<p;i++)
        {
            m=task(a[i][0],a[i][1],m);
        }
        cout<<m<<endl;
    }
    return 0;
}
int task(int x,int k,int m){
    int aux;
    switch (x)
    {
    case 1:aux=m+k;break;
    case 2:aux=m-k;break;
    case 3:aux=m*k;break;
    case 4:aux=m/k;break;
    case 5:aux=m%k;break;
    }
    return aux;
}