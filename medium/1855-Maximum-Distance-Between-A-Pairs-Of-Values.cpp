#include<iostream>
#include<vector>
using namespace std;
int maxDistance(vector<int>& nums1, vector<int>& nums2) {
        int n=nums1.size();
        int m=nums2.size();
        int i=0,j=0;
        int ans=0;
        while(i<n&&j<m){
            if(nums1[i]<=nums2[j]){
                ans=max(ans,j-i);
                j++;
            }
            else{
                i++;
            }
        }
        return ans;
    }
int main(){
    int n,m;
    cout<<"enter the number of elemnent in nums1 array = ";
    cin>>n;
    cout<<"enter the number of elemnent in nums2 array = ";
    cin>>m;

    vector<int>nums1(n);
    vector<int>nums2(m);
    cout<<"enter the array nums1 = "<<endl;
    for(int i=0;i<n;i++){
        cin>>nums1[i];
    }
    cout<<"enter the array nums2 = "<<endl;
    for(int j=0;j<m;j++){
        cin>>nums2[j];
    }
cout<<maxDistance(nums1,nums2);
}