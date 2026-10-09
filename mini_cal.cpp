#include<iostream>
using namespace std;
int main()
{
    int a,b;
    char op;
    cout<<"a="<<endl;
    cin>>a;
    cout<<"b="<<endl;
    cin>>b;
    cout<<"ooperation to be performed"<<endl;
    cin>>op;
    switch(op)
    {
        case '+' :cout<<(a+b)<<endl;break;
        case '-' :cout<<(a-b)<<endl;break;
        case '*' :cout<<(a*b)<<endl;break;
        case '/' :cout<<(a/b)<<endl;break;
        default :cout<<(a%b)<<endl;
    }
}