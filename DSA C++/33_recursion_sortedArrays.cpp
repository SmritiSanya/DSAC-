#include <iostream>
#include <vector>

using namespace std;

int sumArray(int arr[], int n) {
    // Base case: If the size of the array is 0 or less, return 0
    if (n <= 0) {
        return 0;
    }
    if(n==1){
        return arr[0];
    }
    // Recursive case: Sum the last element and the sum of the rest of the array
    return arr[n - 1] + sumArray(arr, n - 1);
}




bool isSorted(int arr[], int size){
    //base case
    if(size==0 || size==1){
        return true;
    }
    if(arr[0]>arr[1]){
        return false;
    }
    else{
        bool ans=isSorted(arr+1,size-1);
        return ans;
    }
}

int main(){
    int arr[1];
    int size;
    if(isSorted(arr,1)){
        cout<<"The array is sorted"<<endl;
    }
    else{
        cout<<"array is not sorted"<<endl;
    }

    int result=sumArray(arr,1);
    cout<<"The sum of elements in an array: "<<result<<endl;
    return 0;
}