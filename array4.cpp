//You have been given an integer array/list(ARR) of size N. Where N is equal to [2M + 1].
//Now, in the given array/list, 'M' numbers are present twice and one number is present only once.
//You need to find and return that number which is unique in the array/list
#include <iostream>
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
        if(count==1)
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
    int arr[7]={1,2,3,4,1,2,3};
    int val=unique(arr,7);
    printArray(arr,7);
    cout<<"unique element in the given array i = "<<val<<endl;
}

//return -1; indicates special type of error that is in this case no value is unique