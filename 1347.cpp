/*���ݶ�����������������������ǵ����Լ���������ж���
��һ����������n,������n��ÿ������������1<=a,b<=10000*/
#include<iostream>
using namespace std;
int jsgys(int x,int y){
    int gys,k;
    if(x>y){
        int temp=x;
        x=y;
        y=temp;
    }
    k=y%x;
    while(k){
        y=x;
        x=k;
        k=y%x;
    }
    gys=x;
    return gys;
}
int main(){
    int a[50][2],i,j,gys,n;
    while(cin>>n){
    for(i=0;i<n;i++)
        for(j=0;j<2;j++)
        cin>>a[i][j];
    for(i=0;i<n;i++)
    {
        gys=jsgys(a[i][0],a[i][1]);
        cout<<"Case "<<i+1<<": "<<gys<<endl;
    }
    }
    return 0;
}