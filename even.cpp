#include<iostream>
using namespace std;
bool even(int a)
{
    if(a&1) return 0;
    return 1;}
    int main()
    {
        int n;
        cin>>n;
        if (even(n))
        {
            cout<<"even"<<endl;
        }    
            else{cout<<"odd"<<endl;
     
    }