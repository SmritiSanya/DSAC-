#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
void rotate(vector<vector<int>>& matrix) {
        int row=matrix.size();

        //transpose
        for(int indexrow=0;indexrow<row;indexrow++){
            for(int indexcol=indexrow;indexcol<row;indexcol++){
                swap(matrix[indexrow][indexcol],matrix[indexcol][indexrow]);
            }
        }

        //reversing the row
        for(int indexrow=0;indexrow<row;indexrow++){
            reverse(matrix[indexrow].begin(),matrix[indexrow].end());
        }
} 


int main(){
    vector<vector<int>> arr  = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    rotate(arr);

    cout<<"Matrix rotated by 90 degrees"<<endl;
    for (const auto& row : arr) {
        for (int val : row) {
            cout << val << " ";
        }
        cout << endl;
    }
    cout << endl;


    return 0;
}