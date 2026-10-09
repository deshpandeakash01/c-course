#include<iostream>
using namespace std;
int insrtionsort(int arr[],int n)
{
    for(int i=1;i<n;i++)
    {
        int num=arr[i];
        int j=i-1;
        for(;j>=0;j--)
        {
            if(arr[j]>num)
            {arr[j+1]=arr[j];}
            else 
            break;        
        }
        arr[j+1]=num;
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
    int arr[6]={12,12,4,45,67,1};
    insrtionsort(arr,6);
    printArray(arr,6);     
}