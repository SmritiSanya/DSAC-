#include<iostream>
using namespace std;


//QUESTION
//Given an array of integers arr, return true if the number of occurrences of each value in the 
//array is unique or 
//false otherwise.

bool uniqueOccurrences(int arr[], int size) {
        int ans=0;
        for(int i=0;i<size;i++)
        {
            ans=ans^arr[i];
        }
        return ans;
                
        
    }
int main()
{
    int arr[6]={1,4,5,5,4,1};
    int result=uniqueOccurrences(arr,6);
    if(result)
    {
        cout<<"false";
    }
    else{
    cout<<"true";}
    return 0;
}