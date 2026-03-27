#include <iostream>
#include <vector>
using namespace std;
void combinationSum(vector<int>& arr, int target, int index, vector<int>& temp, vector<vector<int>>& ans) {
    // Base case
    if (target == 0) {
        ans.push_back(temp);
        return;
    }
    if (index == arr.size() || target < 0) {
        return;
    }
    // Include current element
    temp.push_back(arr[index]);
    combinationSum(arr, target - arr[index], index, temp, ans); // same index because repetition allowed
    temp.pop_back();

    // Exclude current element
    combinationSum(arr, target, index + 1, temp, ans);
}
int main() {
    int n, target;
    cout << "Enter the length of array: ";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << "Enter target: ";
    cin >> target;
    vector<vector<int>> ans;
    vector<int> temp;
    combinationSum(arr, target, 0, temp, ans);
    cout << "\nPossible combinations are:\n";
    for (int i = 0; i < ans.size(); i++) {
        cout << "[ ";
        for (int j = 0; j < ans[i].size(); j++) {
            cout << ans[i][j] << " ";
        }
        cout << "]\n";
    }

    return 0;
}