#include<iostream>
using namespace std;
int main()
{
  int n,i=1;
  cin>>n;
  while(i<=n)
    {
      int j=1;
      char x='A'+i-1;
      while(j<=i)
        {
          cout<<x;
          x++;
          j++;
        }
      cout<<endl;
      i++;
    }
}