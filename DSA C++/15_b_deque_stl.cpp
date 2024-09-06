#include<iostream>
#include<deque>

using namespace std;

int main()
{
    deque<int>d;

    d.push_back(1);
    d.push_back(2);
    
    //d.pop_back();
    cout<<endl;
    cout<<"Print first index element -> "<<d.at(1)<<endl;
    cout<<"front "<<d.front()<<endl;
    cout<<"back "<<d.back()<<endl;

    cout<<"Empty or not: "<<d.empty()<<endl;

    cout<<"Before erase: "<<endl;
    cout<<"Size of deque: "<<d.size()<<endl;
    for(int i:d){
        cout<<i<<" ";
    }
    cout<<endl;

    d.erase(d.begin(),d.begin()+1);
    
    cout<<"After erase: "<<endl;
    cout<<"Size of deque: "<<d.size()<<endl;
    for(int i:d){
        cout<<i<<" ";
    }
    cout<<endl;

}