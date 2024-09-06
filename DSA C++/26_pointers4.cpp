#include<iostream>
using namespace std;

void print(int *p){
    cout<<*p<<endl;
}

void update(int *p){
    p=p+1;
}

int getSum(int arr[], int n){
    cout<<endl<<"Size: "<<sizeof(arr)<<endl;
    //it does not print size of array, instead it prints the size of the pointer 
    //because when we pass an array to the function, its pointer is passed and not the actual array
    int sum=0;
    for(int i=0;i<n;i++){
        sum=sum+arr[i];
    }
    return sum;
}

int main(){    
    /*
    int value=5;
    int *p=&value;
    print(p);
    cout<<"Before: "<<p<<endl;
    update(p);
    cout<<"After: "<<p<<endl;
    */

   int arr[5]={1,2,3,4,5};
   cout<<"Sum is: "<<getSum(arr,5)<<endl;

   return 0;


}