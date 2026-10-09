#include <iostream>
using namespace std;
bool search(int arr[],int size,int key)
{
    for(int i=0;i<size;i++)
    {
        if(arr[i]==key)
         {
             cout<<"Element Present in block number "<< i <<endl;
             return 1;
         }
    }
    return 0;
}
int main()
{
    int arr[7]={1,2,3,4,5,6,7};
    bool found=search(arr,7,1);
    if(found)
    {}
    else
    {
        cout<<"ABSENT"<<endl;
    }
}
