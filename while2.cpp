#include<iostream>
int main(){
    int count=1,sum=0;
    while(count<=30)
    {
        sum=sum+count;
        count=count+1;
    }
    std::cout<<"sum of first 30 natural no is:"<<sum;
    return 0;
}