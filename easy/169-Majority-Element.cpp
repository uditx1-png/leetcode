#include<iostream>
#include<vector>
using namespace std;
int majorityElement(vector<int>& nums){
    int cand=0,count=0;
    int n=nums.size();
    for(int i=0;i<n;i++){
        if(count==0){
            count++;
            cand=nums[i];
        }
        else{
            if(cand==nums[i]){
                count++;
            }
            else{
                count--;
            }
        }
    }
    return cand;
}
int main(){
    int n;
    cout<<"enter the size of array = ";
    cin>>n;
    vector<int>nums(n);
    cout<<"enter the array = ";
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    cout<<majorityElement(nums)<<endl;
    return 0;
}