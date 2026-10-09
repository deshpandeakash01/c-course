#include<iostream>
#include<deque>
using namespace std;
int main()
{
    deque<int>D;
    D.push_front(10);
    D.push_back(20);
    for(int i:D)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    D.push_front(5);
    D.push_back(40);
    D.push_back(80);
    D.push_back(160);
    for(int i:D)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<D.size()<<endl;
    cout<<D.at(4)<<endl;
    D.pop_front();
    D.pop_back();
        for(int i:D)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<D.back()<<endl;
    cout<<D.front()<<endl;
    D.erase(D.begin()+1,D.end());
    cout<<D.size()<<endl;
         for(int i:D)
    {
        cout<<i<<" ";
    }
    cout<<endl;
}