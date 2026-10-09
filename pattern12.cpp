#include<iostream>
using namespace std;
int main()
{
  int n,i=1;
  cin>>n;
  while(i<=n)
    {
      int j=1;
     int val=j;
      while(j<=(n+1-i))
        {
          cout<<val;
          val++;
          j++;
        }
      int x=1;
      while(x<=(i-1))
        {
          cout<<"*";
          x++;
        }
      int y=1;
      while(y<=(i-1))
        {
          cout<<"*";
          y++;
        }
      int z=(n-i+1);
      while(z>=1)
        {
          cout<<z;
          z--;
        }
        
      cout<<endl;
      i++;
    }
}