#include<iostream>
using namespace std;
int main()
{
    int n=2;
    int N;
    cin>>N;
    
    while(n<N&&n>1){
        if(N%n!=0)
        {
          cout<<" prime"<<endl;
            break;
        }
       
    }
 cout<<"is not a prime"<<endl;
}
       


    
    

