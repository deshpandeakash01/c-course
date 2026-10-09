#include<iostream>
using namespace std;
int main()
{
  int n,i=1;
  cin>>n;
  while(i<=n)
    {
      int x=1;
      while(x<=(n-i))
        {
          cout<<" ";
          x++;
        }
      int j=x;
      int val=1;
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