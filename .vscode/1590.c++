#include <iostream>
using namespace std;

int minSubarray(vector<int>& nums, int p) {
    long long total = 0;
    for (int x : nums) total += x;

    int target = total % p;

    // If total is already divisible by p → no need to remove anything
    if (target == 0) return 0;

    unordered_map<int, int> mp;  
    mp[0] = -1;  // prefix index before starting

    long long prefix = 0;
    int res = nums.size();

    for (int i = 0; i < nums.size(); i++) {
        prefix = (prefix + nums[i]) % p;
        int needed = (prefix - target + p) % p;

        // If we have seen a previous prefix that gives required subarray sum
        if (mp.count(needed)) {
            res = min(res, i - mp[needed]);
        }

        mp[prefix] = i;
    }

    // Cannot remove the whole array
    return (res == nums.size() ? -1 : res);
}

int main() {
    int n, p;
    cout << "Enter size: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter array: ";
    for (int i = 0; i < n; i++) cin >> nums[i];

    cout << "Enter divisor p: ";
    cin >> p;

    cout << minSubarray(nums, p);
    return 0;
}