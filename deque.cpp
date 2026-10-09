#include <iostream>
#include<deque>
using namespace std;
int main() {
    deque<int>d;
    d.push_back(2);
    d.push_front(1);
    for(int i:d){
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<"element at index 1="<<d.at(0)<<endl;
    d.pop_back();
    for(int i:d){
        cout<<i<<" ";
    }
     cout<<endl;
     d.clear();
      for(int i:d){
        cout<<i<<" ";
    }
    cout<<"size="<<d.size();
    
}