#include<iostream>
#include<set>


using namespace std;

int main()
{
    set<int> s;
    s.insert(5);
    s.insert(5);
    s.insert(5);
    s.insert(0);
    s.insert(0);
    s.insert(1);
    s.insert(1);
    s.insert(1);
    s.insert(6);

    //always prints in sorted order
    for (auto i : s){
        cout<<i<<endl;
    }

    set<int> ::iterator it=s.begin();
    it++;
    s.erase(it);
    cout<<"After erasing"<<endl;

     for (auto i : s)
    {
        cout<<i<<endl;
    }
    cout<<endl;
    
    cout<<"Is 5 present in the set or not? "<<s.count(5)<<endl;
    cout<<"Is -5 present in the set or not? "<<s.count(-5)<<endl;


    set<int>::iterator itr=s.find(5);

    cout<<"Value present at itr-> "<<*itr<<endl;

    for(auto it=itr;it!=s.end();it++){
        cout<<*it<<" ";
    }
    cout<<endl;
}