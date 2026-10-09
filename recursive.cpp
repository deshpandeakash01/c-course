#include<iostream>
using namespace std;

unsigned long long int factorial(unsigned long long int n)
{
    if(n<=1){
        return 1;
    }
    else{
        return n*factorial((n-1));
        }
}

        int main(){
           unsigned long long int number;
            cin>>number;
            cout<<"the factorial of" << number << " is = " << factorial(number);
        }
   
    
    
