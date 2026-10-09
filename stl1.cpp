#include<iostream>
#include<vector>  
using namespace std;
int main()
{
    vector<int>vec;
    cout<<vec.capacity()<<endl;
    //cout<<vec.size()<<endl;
    //oparation 1
    vec.push_back(6);
    cout<<vec.capacity()<<endl;
    cout<<"element at index o is "<<vec.at(0)<<endl;
    //oparation 2
    vec.push_back(12);
    cout<<vec.capacity()<<endl;
        //oparation 3
     vec.push_back(18);
    cout<<vec.capacity()<<endl;
       //oparation 4
     vec.push_back(24);
    cout<<vec.capacity()<<endl;
        //oparation 5
     vec.push_back(30);
    cout<<vec.capacity()<<endl;
    cout<<"element at index 2 is "<<vec.at(2)<<endl;
    cout<<"front="<<vec.front()<<endl;
    cout<<"back="<<vec.back()<<endl;
    vec.pop_back();
    for(int i:vec)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    vec.clear();
    cout<<vec.size()<<endl;
    cout<<vec.capacity()<<endl;
}