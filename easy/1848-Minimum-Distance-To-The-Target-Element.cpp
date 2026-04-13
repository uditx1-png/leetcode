#include<iostream>
#include<vector>
#include<cmath>
#include<climits>
using namespace std;
int getMinDistance(vector<int>& nums, int target, int start) {
    int minDist = INT_MAX;

    for(int i = 0; i < nums.size(); i++){
        if(nums[i] == target){
            int dist = abs(i - start);
            minDist = min(minDist, dist);
        }
    }

    return minDist;
}
int main(){
    int n;
    cout<<"enter the number = ";
    cin>>n;
    vector<int>nums(n);
    cout<<"enter the vector = ";
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
int target ,start;
cout<<"enter the target = ";
cin>>target;
cout<<"enter the start = ";
cin>>start;
cout<<getMinDistance(nums,target,start);
}