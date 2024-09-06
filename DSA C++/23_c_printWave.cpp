#include<iostream>
#include<vector>

using namespace std;

vector <int> printWave(vector<vector<int>> arr, int nRows, int mCols){
    vector<int> ans;

    for(int i=0;i<mCols;i++){
        if(i&1){
            //odd index: bottom to top
            for(int j=nRows-1;j>=0;j--){
                //cout<<arr[j][i]<<" ";
                ans.push_back(arr[j][i]);
            }
        }
        else{
            //even index: top to bottom
            for(int j=0;j<nRows;j++){
                //cout<<arr[j][i]<<" ";
                ans.push_back(arr[j][i]);
            }
        }
    }
    return ans;
}


int main() {
    vector<vector<int>> arr  = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int nRows = arr.size();
    int mCols = arr[0].size();

    vector<int> result = printWave(arr, nRows, mCols);

    cout << "Wave print of the given matrix is: ";
    for (int i : result) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}
