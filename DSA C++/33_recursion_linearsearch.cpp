#include<iostream>
using namespace std;

bool linearSearch(int arr[], int size, int key){
    if(arr[0]==key){
        return true;
    }
    if(size==0){
        return false;
    }
    bool ans= linearSearch(arr+1,size-1,key);
    return ans;

}

int main(){
    int arr[5]={22,13,5,74,80};
    if(linearSearch(arr,5,80)){
        cout<<"key is present in array"<<endl;
    }
    else{
        cout<<"key is absent in the array"<<endl;
    }

}