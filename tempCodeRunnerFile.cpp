#include<iostream>
using namespace std;
int main(){
    int n,arr[100],i;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    int j=n-1;
    i=0;
   while(i<j){
        if(arr[i]==0){
            swap(arr[i],arr[j]);
            j--;
            
        }
        else{
        i++;
        }
    }
    for(i=0;i<n;i++){
        cout<<arr[i];
    }
    
}