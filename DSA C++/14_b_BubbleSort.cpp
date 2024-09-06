#include<iostream>
using namespace std;

void BubbleSort(int arr[], int size)
{
    for(int i=0;i<size-1;i++)//we do size-1 to avoid redundant comparisons at the end
    {
        //Round 1 to n-1
        for(int j=0;j<size-i-1;j++)//to avoid redundant comparisons
       {
            if(arr[j]>arr[j+1]){
                swap(arr[j], arr[j+1]);
            }
       } 
    }
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