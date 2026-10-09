#include<iostream>
int main(){
    int a=0;
    std::cout<<"enter the number"<<std::endl;
    std::cin>>a;
    int count=1,sum=0;
    while(count<=a)
    {
        sum=sum+count;
        count=count+1;

    }
    std::cout<<" the sum of first " << a <<  " natural number is " << sum;
    return 0;
}