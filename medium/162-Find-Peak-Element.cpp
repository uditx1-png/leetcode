#include <iostream>
#include <vector>
using namespace std;
int findPeakElement(vector<int>& nums) {
    int start = 0;
    int end = nums.size() - 1;

    while (start < end) {
        int mid = start + (end - start) / 2;

        if (nums[mid] < nums[mid + 1]) {
            // Peak is on right side
            start = mid + 1;
        } else {
            // Peak is on left side or at mid
            end = mid;
        }
    }
    return start; // or end (both same)
}
int main() {
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    int peakIndex = findPeakElement(nums);
    cout << peakIndex << endl;
    return 0;
}