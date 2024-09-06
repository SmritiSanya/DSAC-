#include<iostream>
using namespace std;

//Find the intersection of two array A of size m and B of size n 
//Both arrays are sorted in ascending order



int intersectionArray(int arr1[], int m, int arr2[],  int n)
{
    int i=0;
    int j=0;
    int ans=0;
    while(i<n && j<m)
    {
        if(arr1[i]==arr2[j])
        {
            ans=arr1[i];
            i++;
            j++;
        }
        else if(arr1[i]<arr2[j])
        {
            i++;
        }
        else
        {
            j++;
        }
    }
    return ans;
}
int main()
{
    int arr1[6]={1,2,2,2,3,4};
    int arr2[4]={2,5,6,7};
    int result=intersectionArray(arr1, 6, arr2, 4);
    cout<<result<<endl;
}

//this solutions lacks issues if there are more than 1 intersecting numbers for now, we will get back to this solution once we go through stl in cpp