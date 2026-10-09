#include<iostream>
using namespace std;
int pivot(int arr[],int n)
{
int start=0;
int end=n-1;
int mid=(start+(end-start)/2);
while(start<end)
{
    if(arr[mid]<arr[end])
    {end=mid;}
    else if(arr[mid]>=arr[start])
    {start=mid+1;}
    mid=(start+(end-start)/2);
}
return start;
}
int main()
{
    int arr[7]={44,55,66,3,5,6,7,};
    int a=pivot(arr,7);
    cout<<arr[a];
} 