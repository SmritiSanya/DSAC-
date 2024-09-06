#include<iostream>
#include<vector>

using namespace std;
bool searchMatrix(vector<vector<int>>& matrix, int target){
    int row=matrix.size();
    int col=matrix[0].size();

    int rowIndex=0;
    int colIndex=col-1;

    while(rowIndex<row && colIndex>=0){
        int element=matrix[rowIndex][colIndex];
        if(element==target){
            return 1;
        }
        else if(element>target){
            colIndex--;
        }
        else{
            rowIndex++;
        }
    }
    return 0;
}




int main(){
    vector<vector<int>> matrix = {
        {1, 4, 11, 7},
        {2, 5, 8, 12},
        {3, 6, 9, 16},
        {10, 13, 14, 17}
    };
    int ans=searchMatrix(matrix,15);

    if(ans==1){
        cout<<"The key is present in the matrix";
    }
    else{
        cout<<"The key is absent";
    }

}