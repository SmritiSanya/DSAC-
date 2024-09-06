#include<iostream>
using namespace std;

int mountainPeak(int arr[], int size)
{
    int s=0;
    int e=size-1;
    int mid=s+(e-s)/2;
    while(s<e)
    {
    if(arr[mid]<arr[mid+1])
    {
        s=mid+1;
    }
    else
    {
        e=mid;
    }
    mid=s+(e-s)/2;
    }
    return s;
}

int main()
{
    int arr[5]={1,2,4,5,3};
    int result=mountainPeak(arr,5);
    cout<<"Index of peak of the mountain is: "<<result;
    return 0;
}