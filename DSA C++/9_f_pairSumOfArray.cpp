#include<iostream>
using namespace std;

//given an array with integers and int s=5; find the pair of numbers from the array whose sum is equal to s

int pairSum(int arr[], int size)
{
    for(int i=0;i<size;i++)
    {
        for(int j=i+1;j<size;j++)
        {
            if(arr[i]+arr[j]==5)
            {
                cout<<min(arr[i],arr[j]);
                cout<<max(arr[i],arr[j]);
            }
        }
    }
    return 0;
}
int main()
{
    int arr[5]={1,2,3,4,5};
    int result=pairSum(arr,5);
    cout<<result;
    return 0;

}


//refine this code further after learning STL in cpp