#include<iostream>
using namespace std;
void update(int **p2){
    //p2=p2+1; //nothing changes

    //*p2=*p2+1;//change in the address of p

     **p2=**p2 +1;
}
int main(){

    /*
    int i=5;
    int* p=&i;
    int** p2=&p;
    cout<<"p: "<<p<<endl;
    cout<<"address: "<<&p<<endl;

    cout<<"*p2: "<<*p2<<endl;

    cout<<"printing values of i: "<<endl;
    cout<<i<<endl;
    cout<<*p<<endl;
    cout<<**p2<<endl;

    cout<<"printg address of i: "<<endl;
    cout<<&i<<endl;
    cout<<p<<endl;
    cout<<*p2<<endl;

    cout<<"printing address of p: "<<endl;
    cout<<&p<<endl;
    cout<<p2<<endl;

    cout<<"printing address of p2: "<<endl;
    cout<<&p2<<endl;
    */
   int i=5;
   int* p=&i;
   int** p2=&p;

   cout<<endl<<endl;
   cout<<"Before (i): "<<i<<endl;
   cout<<"Before (p): "<<p<<endl;
   cout<<"Before (p2): "<<p2<<endl;

   update(p2);
   cout<<"After (i): "<<i<<endl;
   cout<<"After (p): "<<p<<endl;
   cout<<"After (p2): "<<p2<<endl;







    return 0;

}

