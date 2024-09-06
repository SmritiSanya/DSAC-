#include <iostream>
#include <vector>

using namespace std;

// Helper function to recursively generate subsets
void generateSubsets(const vector<int>& nums, int index, vector<int>& current, vector<vector<int>>& result) {
    // Base case: if index reaches the end of the array, add the current subset to the result
    if (index == nums.size()) {
        result.push_back(current);
        return;
    }

    // Exclude the current element and move to the next
    generateSubsets(nums, index + 1, current, result);

    // Include the current element and move to the next
    current.push_back(nums[index]);
    generateSubsets(nums, index + 1, current, result);

    // Backtrack to remove the current element before the next iteration
    current.pop_back();
}

// Function to return all subsets (power set)
vector<vector<int>> subsets(const vector<int>& nums) {
    vector<vector<int>> result;
    vector<int> current;
    generateSubsets(nums, 0, current, result);
    return result;
}

int main() {
    vector<int> nums = {1, 2, 3};
    vector<vector<int>> result = subsets(nums);

    cout << "The subsets are:" << endl;
    for (const auto& subset : result) {
        cout << "{ ";
        for (int num : subset) {
            cout << num << " ";
        }
        cout << "}" << endl;
    }

    return 0;
}
