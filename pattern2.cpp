#include <iostream>
using namespace std;
int main()
{
  int n, i = 1;
  cout << "enter the no of rows:";
  cin>>n;
  while(i<=n)
    {
      int j=i;
      while(j<=n)
        {
          cout<<" * ";
          j++;
        }
      cout<<endl;
      i++;
    }
  
}  
