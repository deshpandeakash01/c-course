// FIND DUPLICATE 
#include<iostream>
using namespace std;
int unique(int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
            int count=0;
        for(int j=0;j<size;j++)
        {
            if(arr[i]==arr[j])
            {
                count++;
            }
        }
        if(count==2)
        {
            return arr[i];
        }
    }
    return -1;
}
void printArray(int arr[],int size)
{
  for (int i = 0; i < size; i++) 
  { 
    cout << arr[i] << " "; 
  } 
  cout << endl;
}
int main()
{
    int arr[7]={1,2,3,4,5,6,3};
    int val=unique(arr,7);
    printArray(arr,7);
    cout<<"duplicate element in the given array i = "<<val<<endl;
}
