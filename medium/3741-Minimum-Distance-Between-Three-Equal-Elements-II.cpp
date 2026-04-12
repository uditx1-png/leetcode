#include<iostream>
#include<vector>
#include<cmath>
#include<climits>
using namespace std;
int minimumDistance(vector<int>& nums) {
    unordered_map<int, vector<int>> mp;
    for(int i = 0; i < nums.size(); i++){
       mp[nums[i]].push_back(i);
    }
    int ans=INT_MAX;
    for(auto &it : mp){
            vector<int> &v = it.second;

            if(v.size() < 3) continue;

            // only check consecutive triplets
            for(int i = 0; i + 2 < v.size(); i++){
                int dist = 2 * (v[i+2] - v[i]);  // optimized formula
                ans = min(ans, dist);
            }
        }

        return ans == INT_MAX ? -1 : ans;
    }
int main(){
    int n;
    cout<<"enter the number of element = ";
    cin>>n;
    vector<int>nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }

    cout<<minimumDistance(nums)<<endl;
}