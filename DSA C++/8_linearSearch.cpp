#include<iostream>
using namespace std;
bool search(int arr[], int n, int key)
{
    for(int i=0; i<n;i++)
    {
        if(arr[i]==key)
        {
            return 1;
        }
    }
    return 0;
}
int main()
{
    int arr[10]={22, 45, 0, 11, -7, 15, -78, 1, -66, 99};
    int key;

    cin>>key;

    bool found=search(arr, 10, key);

    if(found)
    {
        cout<<"Key is present in the array";
    }
    else{
        cout<<"Key is not present in the array";
    }

    return 0;
}