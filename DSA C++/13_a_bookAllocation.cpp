#include<iostream>
using namespace std;

//Given that there are N books and M students. 
//Also given are the number of pages in each book in ascending order. 
//The task is to assign books in such a way that the max no. of pgs assigned to a student is min,
//with the condition that every student is assigned to read some consecutive books.
//Print that minimum number of pages


int allocateBooks(int arr[], int n , int m)
{
    int s=0;
    int sum=0;
    for(int i=0; i<n;i++)
    {
        sum=sum+arr[i];
    }
    int ans=-1;
    int e=sum;
    int mid=s+(e-s)/2;

    while(s<=e)
    {
        if(isPossible(arr,n,m,mid))
        {
            ans=mid;
            e=mid-1;
        }
        else{
            s=mid+1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}

bool isPossible(int arr[], int n, int m, int mid)
{
    int studentCount=0;
    int pages=0;

    for(int i=0; i<n; i++)
    {
        if(pages+arr[i]<=mid)
        {
            pages=pages+arr[i];
        }
        else
        {
            studentCount++;
            if(studentCount>m||arr[i]>mid)
            {
                return false;
            }
            pages=arr[i];
        }
        
    }
    return true;
}