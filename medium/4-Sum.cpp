#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<vector<int>>fourSum(vector<int>& nums,int n,int target){
    vector<vector<int>>result;
    sort(nums.begin(),nums.end());
    for(int j=0;j<n-3;j++){
        // Skip duplicate j
            if (j > 0 && nums[j] == nums[j - 1]) {
                continue;
            }
    for(int i=j+1;i<n-2;i++){
        // Skip duplicate values for i
        if(i > j+1 && nums[i] == nums[i - 1]){
            continue;
        }
        int start=i+1,end=nums.size()-1;
        while(start<end){
           long long ans=(long long)nums[j]+nums[i]+nums[start]+nums[end];

            if(ans==target){
                result.push_back({nums[j],nums[i],nums[start],nums[end]});
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
            else if(ans>target){
                end--;
            }
            else
            start++;
            
        }
        
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
    int target;
    cout<<"enter the target = ";
    cin>>target;
    vector<vector<int>> ans = fourSum(nums,n,target);

    for(int i = 0; i < ans.size(); i++){
        cout << "[ ";
        for(int j = 0; j < ans[i].size(); j++){
            cout << ans[i][j] << " ";
        }
        cout << "]" << endl;
    }

    return 0;

}