#include<iostream>
using namespace std;
int main(){
    int val,n,arr[100];
    cout<<"Enter the number = ";
    cin>>n;
    cout<<"Enter the array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter the value want to remove = ";
    cin>>val;
    // deletion logic
    for(int i=0;i<n;i++){
        if(arr[i]==val){
            for(int j=i;j<n-1;j++){
                arr[j]=arr[j+1];
            }
            n--;
            i--; // check again if duplicate exists
        }
    }
    cout<<"Array after deletion: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}