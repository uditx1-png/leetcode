#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int xorAfterQueries(vector<int>& nums, vector<vector<int>>& queries) {
    int li,ki,ri,vi;
    for(int i=0;i<queries.size();i++){
            li=queries[i][0];
            ri=queries[i][1];
            ki=queries[i][2];
            vi=queries[i][3];class Solution {
public:
    int xorAfterQueries(vector<int>& nums, vector<vector<int>>& queries) {
    int li,ki,ri,vi;
    const int mod=1000000007;
    for(int i=0;i<queries.size();i++){
            li=queries[i][0];
            ri=queries[i][1];
            ki=queries[i][2];
            vi=queries[i][3];
        int idx=li;
    
        while(idx<=ri){
            nums[idx] = (nums[idx] * vi) % mod;
            idx+=ki;
        }
    }
    int ans=0;
    for(int i=0;i<nums.size();i++){
        ans=ans^nums[i];
    }
    return ans;
    }
};
        int idx=li;
    
        while(idx<=ri){
            //1LL---> It forces multiplication to happen in long long, which is safe.
            nums[idx] = (1LL* nums[idx] * vi) % (1000000007);
            idx+=ki;
        }
    }
    int ans=0;
    for(int i=0;i<nums.size();i++){
        ans=ans^nums[i];
    }
    return ans;
}
int main(){
    int n;
    cout<<"enter the size of nums array = ";
    cin>>n;
    vector<int>nums(n);
    cout<<"enter the array = "<<endl;
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    int q;
    cout<<"enter number of queries = ";
    cin>>q;
    vector<vector<int>> queries;
    cout<<"enter the queries = "<<endl;
    for(int i=0; i<q; i++){
        vector<int> temp(4);
        for(int j=0; j<4; j++){
            cin>>temp[j];
        }
        queries.push_back(temp);
    }
    cout<<xorAfterQueries(nums,queries)<<endl;
    return 0;
}