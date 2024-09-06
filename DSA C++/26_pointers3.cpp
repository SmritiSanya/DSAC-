#include<iostream>
using namespace std;

int main(){

    //CHAR ARRAYS
    
    char ch[6]="abcde";
    int arr[5]={1,2,3,4,5};

    cout<<"arr: "<<arr<<endl;
    cout<<"ch: "<<ch<<endl;

    char *c=&ch[0];
    cout<<"c: "<<c<<endl;

    int *ptr=&arr[0];
    cout<<"ptr: "<<ptr<<endl;

    char temp='z';
    char *p=&temp;
    cout<<"p: "<<p<<endl;
    


   return 0;

}