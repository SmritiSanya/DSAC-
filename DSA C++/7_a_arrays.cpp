#include <iostream>
using namespace std;

void printArray(int arr[], int size)
{
    cout << "Printing the array" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << "Array Printed" << endl;
}
int main()
{
    // declaration of array
    int num[5];

    // accessing an array
    cout << "Value at 12 index is " << num[1] << endl; // since value is not initialised so some garbage value will be displayed

    // cout<<"Value at 7 index is"<<num[7]<<endl;
    // can't happen cause array size is only 5(error)

    // initailization
    int a[3] = {2, 5, 9};

    // accessing an element
    cout << "Value at 2 index is " << a[2] << endl;

    cout << endl;
    int third[8] = {2, 4};

    // printing array
    // printArray(third,8);

    cout << endl;
    // initializing all locations with zero
    int fourth[8] = {0};

    // printing array

    // printArray(fourth,8);

    cout << endl;
    // initializing all locations with 1 is not possible with below code
    int fifth[8] = {1};

    // printing array

    // printArray(fifth,8);
    //cout << endl << "Everything is fine" << endl;

    //different types of array
    char ch[5]={'a','u','g','z','m'};
    cout<<ch[2];
    return 0;

    double arr1[6];
    bool arr2[5];
    floar arr3[4];
}