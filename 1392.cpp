/*Description
����һ������n, �����*���ַ���ֱ��������

Input
����������ݣ�ÿ������ռһ�У�Ϊһ����������n <30

Output
�����*���ַ���ֱ�������Σ����忴Sample

Sample Input
3
Sample Output
***
**
*
*/
#include<iostream>
using namespace std;
int main(){
    int n,i,j;
    while(cin>>n)
    {
        for(i=n;i>0;i--)
        {
            for(j=i;j>0;j--)
            cout<<'*';
        cout<<endl;
        }
    }
    return 0;
}