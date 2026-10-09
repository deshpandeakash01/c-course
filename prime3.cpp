#include<iostream>
using namespace std;
int main()
{
  bool x=true;
  int n;
  cin>>n;
  for(int i=2;i<n;i++)
    {
      if(n%i==0)
      {
        x=false;
        break;
      }    
    }
  if(x)
  {
    cout<<"prime"<<endl;
  }
  else{
    cout<<"not prime"<<endl;
  }
}