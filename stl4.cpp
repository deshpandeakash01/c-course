#include<iostream>
#include<stack>
using namespace std;
int main()
{
    stack<string>s;
    s.push("RAM ");
    s.push("SHREE ");
    s.push("JAI ");
    cout<<s.top();
    s.pop();
    cout<<s.top();
    s.pop();
    cout<<s.top();
}