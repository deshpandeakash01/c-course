#include<iostream>
int main(){
    int a=0;
    std::cin>> a;
    if(a>0){
            std::cout<<" a is positive number";
    }
    else if(a<0){
        std::cout<<" a is negetive number";

    }
    else{
        std::cout<<" Don't Care";
        
    }
    return 0;
}