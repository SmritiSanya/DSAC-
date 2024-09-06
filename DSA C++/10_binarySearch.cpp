#include<iostream>
using namespace std;

//optimization to stop exceeding the limit of 2^31-1 while adding start and end to calculate :
//mid=start+((end-start)/2)
int binarySearch(int arr[], int size, int key)
{
    int start=0;
    int end=size-1;
    int mid=(start+((end-start)/2));
    while (start<=end)
    {
        if(arr[mid]==key)
        {
            return mid;
        }
        if(key>mid)
        {
            start=mid+1;
        }
        else{
            end=mid-1;
        }
        mid=(start+((end-start)/2));
    }
    return -1;
    

}
int main()
{
    int even[6]={2,4,6,8,10,12};
    int odd[5]={3,8,11,14,16};
    int index=binarySearch(even,6,11);
    if(index==-1)
    {
        cout<<"key is not present"<<endl;
    }
    else {
        cout<<"index of key is: "<<index<<endl;
        
    }



    return 0;
}