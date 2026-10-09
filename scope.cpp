#include<iostream>
using namespace std;
int global=79;
int main()
{
    int block=7; // block has scope
    cout<<block<<","<<global<<endl; // it should print 79,7
    int global=9; 
    cout<<global<<endl; // it will print 9 because local variable is more preffered 
    cout<<::global; //it will print 79 because "::" (scope resolution oparater is used)
    //scope resolution oparator enables us to access variables, functions, or classes defined in different scopes.
}