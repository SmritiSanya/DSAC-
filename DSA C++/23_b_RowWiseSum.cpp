#include<iostream>
using namespace std;

void rowWiseSum(int arr[][3], int row, int col){
    for(int row=0;row<3;row++){
        int sum=0;
        for(int col=0;col<3;col++){
        sum=sum+arr[row][col];
        }
        cout<<sum <<" ";
    }
    cout<<endl;
}

int largestRowSum(int arr[][3], int row, int col){
    int maxi=INT_MIN;
    for(int row=0;row<3;row++){
        int sum=0;
        for(int col=0;col<3;col++){
        sum=sum+arr[row][col];
        }
        if(sum>maxi){
            maxi=sum;
        }
    }
    return maxi;
}

int main(){
    int arr[3][3]={3,4,11,2,12,1,7,8,7};
    rowWiseSum(arr,3,4);
    cout<<endl;
    int largest= largestRowSum(arr, 3, 3);
    cout<<"The largest row sum is: "<<largest;



}