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
      int val=1;
      while(x<=n)
        {
          cout<<val;
          x++;
          val++;
        }
      int j=(i-1);
      while(j>=1)
        {
        cout<<j;
          j--;
        }
      cout<<endl;
      i++;
    }
}