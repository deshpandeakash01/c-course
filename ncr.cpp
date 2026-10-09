#include<iostream>
using namespace std;
int fact(int a){
    int ans=1;
    for(int i=1;i<=a;i++)
    {
        ans=ans*i;
    }
    return ans;
}
int ncr(int n,int r){
    int num=fact(n);
    int den=fact(n-r)*fact(r);
    return num/den;
}
int main()
{
    int n,r;
    cin>>n>>r;
    cout<<ncr(n,r);
}