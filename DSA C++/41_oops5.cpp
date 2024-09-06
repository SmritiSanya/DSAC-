#include<iostream>
using namespace std;

//MULTI LEVEL INHERITANCE

class Animal{
    public:
    int age;
    int weight;

    public:
    void speak(){
        cout<<"Speaking"<<endl;
    }

};

class Dog: public Animal{

};

class GermanShephard: public Dog
{

};

int main(){
    Dog d;
    d.speak();
    cout<<d.age<<endl;

    GermanShephard g;
    g.speak();
    cout<<"Everything's fine"<<endl;
    return 0;
}