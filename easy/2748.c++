#include<iostream>

#include<numeric>
using namespace std;
int main(){
    int nums,i,j,a[100],d,count=0;
    cout<<"enter the number :";
    cin>>nums;
    for( i=0;i<nums;i++){
        cin>>a[i];
    }
    for(i=0;i<nums;i++){
        for(j=i+1;j<nums;j++){
            if(gcd(a[i],a[j])==1){
            count++;
            }
        }
    }
    cout<<count;
    
    
};
    