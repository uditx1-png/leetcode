#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cout<<"enter the size of an array = ";
    cin>>n;
    vector<int>nums(n);
    cout<<"enter the array = "<<endl;
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    cout<<" the array = "<<endl;
    for(int i=0;i<n;i++){
        cout<<nums[i]<<" ";
    }
    int start =0;
    int end=n-1;
    while(start<end){
        int mid = start + (end - start) / 2;

        // Make mid even
        if(mid % 2 == 1) {
            mid--;
        }

        if(nums[mid] == nums[mid + 1]) {
            start = mid + 2;
        } else {
            end = mid;
        }
    }
    cout<<"single element is = "<<nums[start];
    return 0;
}