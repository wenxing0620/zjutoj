/*��Ŀ����
����һ�ѵ㣬�����֮��������ߣ����Ƿ����ŷ����·���������е㶼��һ����ͨ��
����
�ж��鰸����ÿ���һ����������n,m��n <= 15��ʾ������m <= n*(n-1)/2��ʾ����
��������m�У�ÿ������������ 1 <= a,b <= n (a != b)
���
������ŷ����·�������Yes��
���������No��
��������
3 3
1 2
2 3
3 1
4 4
1 2
2 3
1 3
1 4
�������
Yes
No
*/
#include<iostream>
using namespace std;
int main(){
    int a[16][16]={},n,m,i,j,dig[16]={},k=0,sum;
    while(cin>>n>>m)
    {
        k=0;
        while (k<m)
        {
            k++;
            cin>>i>>j;
            a[i][j]=1;
            a[j][i]=1;
        }
        for(i=1;i<=n;i++)
        {   
            for(j=1;j<=n;j++)
            {
                if(a[i][j]==1)
                dig[i]++;
            }
        }
        sum=0;
        for(i=1;i<=n;i++)
        {   
            if(dig[i]%2==0)
            {
                sum++;
            }
            
        }
        if(sum==n)cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
    return 0;
}
