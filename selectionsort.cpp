#include<iostream>
using namespace std;
void sort(int arr[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        int min=i;
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]<arr[min]){min=j;}
        }
        swap(arr[min],arr[i]);
    }
}
void printArray(int arr[],int n)
{
  for (int i = 0; i < n; i++) 
  { 
    cout << arr[i] << " "; 
  } 
  cout << endl;
}
int main()
{
    int arr[6]={12,23,4,45,67,1};
    sort(arr,6);
    printArray(arr,6);     
}