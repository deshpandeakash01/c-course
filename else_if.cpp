// Replica of ATM 
#include<iostream>
int main()
{
    int option=0;
    std::cout<<"choose option 1 for withdrawal"<<std::endl;
    std::cout<<"choose option 2 for deposit"<<std::endl;
    std::cout<<"to check balence choose any other key "<<std::endl;
    std::cin>>option;
    if(option==1)
    {
        std::cout<<"enter your pin";
    }
    else if(option==2)
    {
            std::cout<<"enter your account number";
    }
    else{
                std::cout<<"your account balence is xyz";
            }
        

     return 0;
    
    
}