#include<iostream>
using namespace std;
int Bsort(int arr[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-(i+1);j++)
        {
            if(arr[j]>arr[j+1])
            {swap(arr[j],arr[j+1]);}
        }
    }
}
void printArray(int arr[],int n)
{
  for (int i=0;i<n;i++) 
  {cout<<arr[i]<< " "; }
  cout<<endl;
}
int main()
{
    int arr[6]={12,23,4,45,67,1};
    Bsort(arr,6);
    printArray(arr,6);     
}
    

