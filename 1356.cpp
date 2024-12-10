/*给出两个数，计算个位数的和
*/
#include<iostream>
using namespace std;
int main(){
    int a,b,ans;
    while(cin>>a>>b)
    {   
        ans=(a%10)+(b%10);
        cout<<ans%10<<endl;
    }
    return 0;
}