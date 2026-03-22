#include<iostream>
using namespace std;
int main(){
    int nums,first,end,mid,a[10],target,i,ans=-1,last=-1;
    cout<<"enter the number: ";
    cin>>nums;
    cout<<"enter the array: ";
    for(i=0;i<nums;i++){
        cin>>a[i];
    }
    cout<<"enter the target:";
    cin>>target;
    first=0;
    end=nums-1;
    // first position 
    while(first<=end){
        mid=first+(end-first)/2;
            if(a[mid]==target){
                ans=mid;
                end=mid-1;
            }
            else if(a[mid]<target){
                first=mid+1;
            }
            else
            end=mid-1;
        }
    cout<<ans<<endl;

    // last position
    first=0;
    end=nums-1;
     while(first<=end){
        mid=first+(end-first)/2;
            if(a[mid]==target){
                last=mid;
                first=mid+1;
            }
            else if(a[mid]<target){
                first=mid+1;
            }
            else
            end=mid-1;
        }
    cout<<last<<endl;
    int pos[2]={ans,last};
    cout<<"["<<pos[0]<<","<<pos[1]<<"]";
    return 0;
}