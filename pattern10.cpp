#include<iostream>
using namespace std;
int main()
{
  int n,i=1;
  cin>>n;
  while(i<=n)
    {
      int x=0;
      while(x<=(i-1))
        {
          cout<<" ";
          x++;
        }
      int j=x,val=i;
      while(j<=n)
        {
          cout<<val;
          j++;
          val++;
        }
        cout<<endl;
      
      i++;

      
    }
}