/*Description
���������ַ�������Ҫ���������ַ���ǰ�����Ӻ�����Ϳ�����

Input
��һ������һ������N����ʾ�������ݵ�����(1<N=<20)
ÿ������ֻ��һ�У��������ַ������м��пո������ÿ���ַ�������Сд��ĸ��ɵģ�ÿ���ַ������Ȳ�����100

Output
���һ�б�ʾ���Ӻ���ַ���

Sample Input
1
acm zjut
Sample Output
acmzjut*/
#include<iostream>
using namespace std;
int main(){
    char a[20][202]={};
    int i,j,k,n;
    cin>>n;
    cin.ignore();
    for(i=0;i<n;i++)
    {
        cin.getline(a[i],202);
    }
    for(i=0;i<n;i++)
    {
        j=0;
        k=0;
        while(a[i][k]!='\0')
        {
            if(a[i][k]!=' ')
            {
                a[i][j++]=a[i][k];
            }
        k++;
        }
    a[i][j]='\0';
    }
    for(i=0;i<n;i++)
    {
        for(j=0;a[i][j]!='\0';j++)
        cout<<a[i][j];
    cout<<endl;
    }
    return 0;

}