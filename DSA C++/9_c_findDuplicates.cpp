#include<iostream>
using namespace std;

//You are given an array ‘ARR’ of size ‘N’ containing each number between 1 and ‘N’ - 1 at least once. 
//There is a single integer value that is present in the array twice. 
//Your task is to find the duplicate integer value present in the array.

//For example:

//Consider ARR = [1, 2, 3, 4, 4], the duplicate integer value present in the array is 4. 
//Hence, the answer is 4 in this case.
int findDuplicate(int arr[], int size)
{
    int ans=0;

    //XOR ing all array elements
    for(int i=0;i<size;i++)
    {
        ans=ans^arr[i];
    }

    //XOR from 1 to n-1
    for(int i=1;i<size;i++)
    {
        ans=ans^i;
    }
    return ans;
}
int main()
{
    int arr[6]={1,3,2,3,4,5};
    int result=findDuplicate(arr,6);
    cout<<result;
}