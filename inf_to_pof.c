#include<iostream>
using namespace std;
int top=-1;
void push(char s[],int size,char item)
{
    if(top>=size-1)
    {
        cout<<"overflow!";
        return;
    }
    s[++top]=item;
}
char pop(char s[])
{
    if(top==-1)
    {
        cout<<"underflow!";
        return -1;
    }
   return s[top--];
}
void display(char s[])
{
    for(int i=0;i<=top;i++)
    {
        cout<<s[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    int size;
    cout<<"enter size pf stack\n";
    cin>>size;
    char stack[size];
    push(stack,5,'a');
    push(stack,5,'k');
    push(stack,5,'a');
    push(stack,5,'s');
    push(stack,5,'h');
    display(stack);

}