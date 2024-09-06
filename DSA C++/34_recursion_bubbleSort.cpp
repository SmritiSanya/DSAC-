#include<iostream>
using namespace std;

void BubbleSort(int arr[], int size)
{
    //base case
    if(size==1|| size==0){
        return;
    }

    //ek case solve karlia - largest element ko end me rakh dia
    for(int i=0;i<size-1;i++){
        if(arr[i]>arr[i+1]){
            swap(arr[i], arr[i+1]);
        }
    } 
    BubbleSort(arr,size-1);
    
}

void printArray(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++) {
        cout << arr[i] << " ";
        cout << endl;
    }
}

// Driver program
int main()
{
    int arr[] = { 64, 25, 12, 22, 11 };
    int n = sizeof(arr) / sizeof(arr[0]);

    // Function Call
    BubbleSort(arr, n);
    cout << "Sorted array: \n";
    printArray(arr, n);
    return 0;
}