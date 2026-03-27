#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int n;
    int m;
    vector<int>nums1;
    vector<int>nums2;
    cout<<"enter the array length you want to merge = ";
    cin>>m;
    cout<<"enter the array = ";
    for(int i=0;i<m;i++){
        int x;
        cin>>x;
        nums1.push_back(x);
    }
    cout<<"enter the array length you want to merge = ";
    cin>>n;
    cout<<"enter the array2 = ";
     for(int i=0;i<n;i++){
        int x;
        cin>>x;
        nums2.push_back(x);
    }
    vector<int>result;
    for(int i=0;i<m;i++){
        result.push_back(nums1[i]);
    }
    for(int i=0;i<n;i++){
         result.push_back(nums2[i]);
    }
    int total=n+m;
    sort(result.begin(),result.end());
    cout<<"concatenate of both matrix:"<<endl;
    for(int i=0;i<total;i++){
        cout<<result[i]<<" ";
    }
    cout<<endl;
}