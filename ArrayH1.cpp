//sum of all element of array
#include<iostream>
using namespace std;
int main()
{
    int count=0;
    int size;
    cin>>size;
    int arr[1000];
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    for(int j=0;j<size;j++)
    {
        count+=arr[j];
    }
cout<<count;
}