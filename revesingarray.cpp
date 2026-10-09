#include<iostream>
using namespace std;
void reverse(int arr[],int size)
{
  int initial=0;
  int final=size-2;
  while(initial<final)
  {
    swap(arr[initial],arr[final]);
    initial++;
    final--;
  }
}
void printArray(int arr[],int size)
{
  for (int i = 0; i < size; i++) 
  { 
    cout << arr[i] << " "; 
  } 
  cout << endl;
}
int main(){
    int arr[5]={1,2,3,4,5};
    reverse(arr,5);
    printArray(arr,5);

    int brr[10]={12,23,34,45,56,67,78,89,90};
    reverse(brr,10);
    printArray(brr,10);
}
