#include<iostream>
using namespace std;
int main()
{
  int n,i=1;
  cin>>n;
  while(i<=n)
    {
      int j=1;
      char x=65;
      while(j<=n)
        {
          cout<<x;
          x++;
          j++;
        }
      cout<<endl;
      i++;
    }
}