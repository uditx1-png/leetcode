#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>

using namespace std;
void trap(vector<int>& height){
    int n=height.size();
    int leftmax=0,rightmax=0,maxheight=height[0],index=0;
    int water=0;
    // max  height building
    for(int i=1;i<n;i++){
        if(maxheight<height[i]){
            maxheight=height[i];
            index=i;
        }
    }
    // left part
    for(int i=0;i<index;i++){
         if(leftmax>height[i]){
            water+=leftmax-height[i];
         }
         else
         leftmax=height[i];
    }
    //right part
    for(int i=n-1;i>index;i--){
         if(rightmax >height[i]){
            water+=rightmax-height[i];
         }
         else
         rightmax=height[i];
    }
     cout<<water<<endl;
}
int main(){
    int n;
    vector<int>height;
    cout<<"enter the base of building = ";
    cin>>n;
    cout<<"enter the height of each building = ";
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        height.push_back(x);
    }
    trap(height);
    return 0;
}