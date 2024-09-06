#include<iostream>
using namespace std;

bool binarySearch(int *arr, int s, int e, int key){
    //base case
    if(s>e){
        return false;
    }

    //processing
    int mid=s+(e-s)/2;

    if(arr[mid]==key){
        return true;
    }

    if(arr[mid]<key){
        return binarySearch(arr,mid+1,e,key);
    }
    else{
        return binarySearch(arr,s,mid-1,key);
    }
}

int main(){
    int arr[6]={33,14,55,70,80,92};
    cout<<"present or not: "<<binarySearch(arr,0,5,55);
    return 0;

}