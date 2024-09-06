#include<iostream>
using namespace std;

int main(){
    int arr[5]={7,1,2,3,4};
    cout<<"address of first memory block is: "<<arr<<endl;
    cout<<"address of first memory block is: "<<&arr[0]<<endl;
    cout<<"address of second memory block is: "<<&arr[1]<<endl;
    cout<<"value at arr[0] is: "<<arr[0]<<endl;

    cout<<"Value at *arr: "<<*arr<<endl;
    cout<<"Value at *arr+1: "<<*arr+1 <<endl;
    cout<<"Value at *(arr+1): "<<*(arr+1)<<endl;

    cout<<"Value at arr[2]: "<<arr[2]<<endl;
    cout<<"Value at *(arr+2) is: "<<*(arr+2)<<endl;

    cout<<endl<<endl;

    int i=3;
    cout<<"i[arr]: "<<i[arr]<<endl;

    cout<<endl<<endl;


    int temp[5]={1,2,3,4,5};
    int *ptr=&temp[0];
    cout<<"Size of temp: "<<sizeof(temp)<<endl;
    cout<<"Size of *temp: "<<sizeof(*temp)<<endl;
    cout<<"Size of &temp: "<<sizeof(&temp)<<endl;
    cout<<"Size of ptr: "<<sizeof(ptr)<<endl; 
    cout<<"Size of *ptr: "<<sizeof(*ptr)<<endl;
    cout<<"Size of &ptr: "<<sizeof(&ptr)<<endl;


    cout<<endl<<endl;
    int a[20]={0};
    cout<<"&a[0]: "<<&a[0]<<endl;
    cout<<"&a : "<<&a<<endl;
    cout<<a<<endl;

    int *m=&a[0];
    cout<<"m: "<<m<<endl;
    cout<<"*m: "<<*m<<endl;
    cout<<"&m: "<<&m<<endl;

    cout<<endl<<endl<<endl;

    int arr1[10];
    int *ptr1=&arr[0];
    cout<<ptr1<<endl;
    ptr1=ptr1+1;
    cout<<ptr1<<endl;


    cout<<endl<<endl;
    return 0;

}