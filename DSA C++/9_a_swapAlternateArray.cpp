#include <iostream>
using namespace std;

void swapAlternate(int arr[], int n)
{

    for (int i = 0; i < n; i = i + 2)
    {
        if (i + 1 < n)
        {
            swap(arr[i], arr[i + 1]);
        }
    }
}
int main()
{
    int size;
    cin >> size;

    int num[100];

    // taking inputs in the array
    for (int i = 0; i < size; i++)
    {
        cin >> num[i];
    }

    swapAlternate(num,size);

    //printing array
    for(int i=0;i<size;i++)
    {
        cout<<num[i]<<" ";
    }cout<<endl;

    return 0;
}