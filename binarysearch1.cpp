#include<iostream>
#include<climits>
using namespace std;
int binary(int arr[],int n,int key)
{ 
int start=0;
int end=n-1;
int mid=(start/2+end/2);
while(start<=end)
{
    if(arr[mid]==key){return mid;}
    else if(arr[mid]<key){start=mid+1;}
    else{end=mid-1;}
    mid=(start/2+end/2);
}
return -1;
}
int main()
{
int arr[7]={12,34,45,56,67,78,89};
int x=binary(arr,7,10);
cout<<"location of the element is "<<x<<endl;
}