/*Description
�������Ϳ������һ�������Σ���a-z��˳����䡣

Input
�������ݣ������ļ�ĩ
ÿ����������a��b�����͸�,0<a,b<=20

Output
��������ַ�Ϊ���ĳ����Σ�ÿ��ͼ��֮���һ�С�

Sample Input
2 3
4 2
Sample Output
ab
cd
ef

abcd
efgh*/
#include<iostream>
using namespace std;
int main(){
    int a,b,i,j,c=97;
    while(cin>>a>>b)
    {
        c=97;
        for(i=0;i<b;i++)
        {
            for(j=0;j<a;j++)
            {
                cout<<char(c);
                c++;
            }
        cout<<endl;
        }
        cout<<endl;
        
    }
    return 0;
}