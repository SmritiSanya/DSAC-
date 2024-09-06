#include <iostream>
using namespace std;

// m numbers appear twice and one number appears only once
//  2m+1 is teh size of the array

// input format:
//  *number of test cases
//  *total numbers in the sequence
//  *the sequence

// example
//  2 (test case)
//  5 (total numbers in sequence 1)
//  1 3 2 3 1 (sequence 1)
//  7 (total numbers in sequence 2)
//  2 4 6 1 6 2 4 (sequence 2)

int findUnique(int arr[],int size)
{
    int ans=0;
    for(int i=0;i<size;i++)
    {
        ans=ans^arr[i];
    }
    return ans;
}


int main()
{
    int arr[7]={1,4,5,5,4,3,1};
    int result=findUnique(arr,7);
    cout<<result;
    return 0;
}