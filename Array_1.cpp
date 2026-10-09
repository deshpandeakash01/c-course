#include <iostream>
using namespace std;
void printarray(int arr[],int size){
    cout<<"printing array"<<endl;
    for(int i=0;i<size;i++){
       cout<<arr[i]<<" "; 
    }
    cout<<"printing done"<<endl;
}
int main(){
    int first[12]={1,2,3};
    printarray(first,12);
    
    int second[3]={1,2,3};
    printarray(second,3);
}
