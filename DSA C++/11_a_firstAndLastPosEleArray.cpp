#include<iostream>
using namespace std;
//find the first and last position of the element in an array
//0 0 1 1 2 2 2 2
//output: 4 7

//hw: find total occurences of the number as well

int firstOccurrence(int arr[], int size, int key)
{
    int ans=-1;;
    int start=0;
    int end=size-1;
    int mid=start+((end-start)/2);

    while (start<=end)
    {
        if(arr[mid]==key)
        {
            ans=mid;
            end=mid-1;
        }
        
        else if(key>arr[mid]){
            start=mid+1;
        }
        else if(key<arr[mid])
        {
            end=mid-1;
        }
        mid=start+((end-start)/2);
    }
    return ans;
    
}

int lastOcc(int arr[], int size, int key)
{
    int ans=-1;
    int s=0;
    int e=size-1;
    int mid=s+(e-2)/2;

    while(s<=e)
    {
        if(key==arr[mid])
        {
            ans=mid;
            s=mid+1;

        }
        else if(key>arr[mid]){
            s=mid+1;
        }
        else if(key<arr[mid])
        {
            e=mid-1;
        }
        mid=s+(e-s)/2;

    }
    return ans;
}


int main()
{
    int arr[8]={0,0,1,1,2,2,2,2};
    cout<< "First Occurence of key is: "<<firstOccurrence(arr,8,1)<<endl;;
    cout<< "Last Occurence of key is: "<<lastOcc(arr,8,1)<<endl;
    int totalOcc=lastOcc(arr,8,1)-firstOccurrence(arr,8,1)+1;
    cout<<"total number of occurences is: "<<totalOcc;
    return 0;
}