#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<vector<int>>threeSum(vector<int>& nums){
    vector<vector<int>>result;
    int n=nums.size();
    sort(nums.begin(),nums.end());
    for(int i=0;i<n-2;i++){
        // Skip duplicate values for i
        if(i > 0 && nums[i] == nums[i - 1]){
            continue;
        }
        int start=i+1,end=nums.size()-1;
        while(start<end){
           int ans=nums[i]+nums[start]+nums[end];

            if(ans==0){
                result.push_back({nums[i],nums[start],nums[end]});
                // Skip duplicate start
                while (start < end && nums[start] == nums[start + 1]) {
                    start++;
                }
                // Skip duplicate end
                while (start < end && nums[end] == nums[end - 1]) {
                        end--;
                }
                start++;
                end--;
            }
            else if(ans>0){
                end--;
            }
            else
            start++;
            
        }
        
    }
    return result;
}
int main(){
    int n;
    cout<<"enter = ";
    cin>>n;
    vector<int>nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    vector<vector<int>> ans = threeSum(nums);

    for(int i = 0; i < ans.size(); i++){
        cout << "[ ";
        for(int j = 0; j < ans[i].size(); j++){
            cout << ans[i][j] << " ";
        }
        cout << "]" << endl;
    }

    return 0;

}