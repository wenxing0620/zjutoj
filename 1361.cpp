/*���������ľ���
�������룬ÿ�������ռ�����У��ֱ�Ϊx1 y1 x2 y2�����������λС��*/
#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int main(){
    double x1,y1,x2,y2,d;
    while(cin>>x1>>y1>>x2>>y2)
    {
        d=sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
        cout<<fixed<<setprecision(2)<<d<<endl;
    }
    return 0;
}