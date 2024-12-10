/*计算两点间的距离
多组输入，每组的数据占据四行，分别为x1 y1 x2 y2，结果保留两位小数*/
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