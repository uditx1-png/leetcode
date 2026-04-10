#include<iostream>
#include<vector>
#include<cmath>
#include<climits>
using namespace std;
int minimumDistance(vector<int>& nums) {
    int ans=INT_MAX;
    bool found=false;
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                for(int k=j+1;k<nums.size();k++){
                    if(nums[i]==nums[j]==nums[k]){
                        int dist =abs(i - j) + abs(j - k) + abs(k - i);
                        ans=min(ans,dist);
                        found=true;
                    }
                }
            }
        }
        if(!found)
        return -1;
        return ans;
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