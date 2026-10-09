#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int i=log10(n),ans=0;
    while(n!=0&&i>=0)
    {
        int dig=n%10;
        ans=(dig*pow(10,i))+ans;
        i--;
        n=n/10;
    }
    cout<<ans;
}