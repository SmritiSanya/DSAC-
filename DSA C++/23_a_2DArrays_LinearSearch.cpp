#include<iostream>
using namespace std;

bool isPresent(int arr[][4], int key,int row, int col){
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(arr[i][j]==key){
                return 1;
            }
        }
    }
    return 0;
}

int main(){
    //creating 2D Array
    //int arr[3][4]={1,2,3,4,5,6,7,8,9,10,11,12};
    //int arr[3][4]={{1,2,3,10},{4,5,6,11},{7,8,9,12}};
    int arr[3][4];
   
    //taking input: row wise
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cin>>arr[i][j];
        }
    }
    

    /*
    //taking input: col wise
    for(int i=0;i<4;i++){
        for(int j=0;j<3;j++){
            cin>>arr[i][j];
        }
    }
    */

   
    //printing output
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<"Enter element to be search in Array: ";
    int key;
    cin>>key;
    cout<<endl;
    if(isPresent(arr,key,3,4)){
        cout<<"Found the key";
    }
    else{
        cout<<"Key is not present in the array";
    }
    
    

    return 0;
}