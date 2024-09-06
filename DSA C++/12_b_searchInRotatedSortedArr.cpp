#include<iostream>
using namespace std;
int getPivot(int arr[], int size)
{
    int s=0;
    int e=size-1;
    int mid=s+(e-s)/2;
    while(s<e)
    {
        if(arr[mid]>=arr[0])
        {
            s=mid+1;
        }
        else
        {
            e=mid;
        }
        mid=s=(e-s)/2;
    }
    return s;
}

int binarySearch(int arr[], int start,int end, int key)
{
    int s=start;
    int e=end;
    int mid=s+(e-s)/2;
    while(s<=e)
    {
    if(key>arr[mid])
    {
        s=mid+1;
    }
    else if(key<arr[mid])
    {
        e=mid-1;
    }
    else if(key==arr[mid])
    {
        return mid;
    }
    mid=s+(e-s)/2;
    }
    return -1;
}

int SearchRoatatedSorted(int arr[],int size, int key)
{
    int pivot=getPivot(arr,size);
    if(key>=arr[pivot] && key<=arr[size-1])
    {
        return binarySearch(arr,pivot,size-1,key);
    }
    else
    {
        return binarySearch(arr,0,pivot-1,key);
    }
}

int main()
{
    int arr[5]={7,9,1,4,5};
    int result=SearchRoatatedSorted(arr,5,4);
    cout<<result<<endl;
    return 0;
}