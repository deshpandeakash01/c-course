#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int i=0,n,ans=0;
    cin>>n;
    while(n!=0)
    {
        int dig=n&1;
        ans=(pow(10,i)*dig)+ans;
        n=n>>1;
        i++;
    }
    
    cout<<ans;
}