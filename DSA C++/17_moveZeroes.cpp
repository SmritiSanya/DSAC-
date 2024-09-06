#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

void moveZeroes(int arr[], int n) //n is the size of array
{
    int i=0;
    for (int j = 0; j < n; j++)
    {
        if(arr[j]!=0)
        {
            swap(arr[j],arr[i]);
            i++;
        }
    }
    
}

int main(){
    int arr[5]={1,0,2,0,5};
    moveZeroes(arr,5);
    for (int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }
}