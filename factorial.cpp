#include<iostream>
int main()
{
    int num;
    std::cout<<"Enter the number to find the factorial = ";
    std::cin>>num;
    int factorial=1;
    
    for(int a=1;a<=num;a++)
    {
        factorial=factorial*a;
    }
    std::cout<<"the factorial of given number is = "<< factorial;
}