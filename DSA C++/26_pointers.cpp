#include<iostream>
#include<vector>
using namespace std;

int main(){
    int num=5;

    cout<<"The value is (num): "<<num<<endl;

    //&address operator
    cout<<"The address is (num): "<<&num<<endl;

    int *p=&num;
    cout<<"The value is (p): "<<*p<<endl;
    cout<<"The address is (p): "<<p<<endl; 
    cout<<"The size of integer (num) is: "<<sizeof(num)<<endl;
    cout<<"The size of pointer (p) is: "<<sizeof(p)<<endl;

    //another way to initialize pointer
    //int*q; is a bad practise

    int *q=0;
    //cout<<q<<endl; will give segmentation fault at this step so always initialize
    q=&num;
    cout<<"Value is (q): "<<*q<<endl;
    cout<<"Address is (q): "<<q<<endl;

    int a=num;
    a++;
    cout<<"Value of a: "<<a<<endl;
    cout<<"Value of num: "<<num<<endl;


    cout<<"Value of p before increment: "<<*p<<endl;
    cout<<"Value of num before increment: "<<num<<endl;
    *p++;
    cout<<"Value of p after increment: "<<*p<<endl;
    cout<<"Value of num after increment: "<<num<<endl;

    //copying a pointer
    int *m=p;
    cout<<"value of p: "<<*p<<endl;
    cout<<"value of m: "<<*m<<endl;
    cout<<"address of p: "<<p<<endl;
    cout<<"address of q: "<<q<<endl;

    return 0;
}