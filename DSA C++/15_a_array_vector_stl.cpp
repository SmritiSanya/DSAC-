#include<iostream>
//#include<array>
#include<vector>
using namespace std;

//ARRAY
/*
int main(){
    //initialization of array
    array<int ,4> a={1,2,3,4};

    //size of array
    int size=a.size();

    //printing
    for(int i=0;i<size;i++)
    {
        cout<<a[i]<<endl;
    }

    //using a.at()
    cout<<"Element at index 3: "<<a.at(3)<<endl;

    //using a.empty()
    cout<<"Empty or not: "<<a.empty()<<endl;

    //first and last element
    cout<<"First element of the array: "<<a.front()<<endl;
    cout<<"Last element of the array: "<<a.back()<<endl;
    
}
*/




//VECTOR

int main(){
    vector<int> v;
    cout<<"Capacity -> "<<v.capacity()<<endl;

    v.push_back(1);
    cout<<"Capacity -> "<<v.capacity()<<endl;

    v.push_back(2);
    cout<<"Capacity -> "<<v.capacity()<<endl;

    v.push_back(3);
    cout<<"Size -> "<<v.size()<<endl;
    cout<<"Capacity -> "<<v.capacity()<<endl;
    //capacity becomes 4 cause it doubles when an element is added which is more than the current size of the vector


    cout<<"Element at index 2: "<<v.at(2)<<endl;

    cout<<"First Element -> "<<v.front()<<endl;
    cout<<"Last Element -> "<<v.back()<<endl;

    cout<<"before pop "<<endl;
    for(int i:v){
        cout<<i<<" ";
    }
    
    cout<<endl;

    v.pop_back();

    cout<<"after pop "<<endl;
    for(int i:v){
        cout<<i<<" ";
    }
    
    cout<<endl;

    cout<<"Before clear size ->"<<v.size()<<endl;
    cout<<"before clear capacity ->"<<v.capacity()<<endl;
    v.clear(); //capacity remains the same, only size changes
    cout<<"After clear size ->"<<v.size()<<endl;
    cout<<"After clear capacity ->"<<v.capacity()<<endl;

    vector<int> a(5,1);
    cout<<"print a: "<<endl;
    for(int i:a){
        cout<<i<<" ";
    }
    cout<<endl;

    vector <int> last(a);
    cout<<"print last: "<<endl;
    for(int i:last){
        cout<<i<<" ";
    }
    cout<<endl;
    
}
