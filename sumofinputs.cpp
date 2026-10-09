#include<iostream>
int main(){
    int sum=0,input=0;
    std::cout<<"give inputs";
    while(std::cin>>input)
    {
       sum=sum+input;
    }
        
    
    std::cout<< "the sum of given inputs is " << sum <<std::endl;
    return 0;
}