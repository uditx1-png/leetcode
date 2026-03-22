#include<iostream>
#include<vector>
using namespace std;
 int main(){
    int n,arr[100],rem,ans[100],count1[100];
    cout<<"enter the numb er of element in array = ";
    cin>>n;
    cout<<"enter the array ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        int place=1,b=0,count=0;
        while(arr[i]!=0){
            rem=arr[i]%2;
            if(rem==1){
                count++;
            }
            b=b+rem*place;
            arr[i]/=2;
            place*=10;
        }
        ans[i]=b;
        count1[i]=count;
    }
    for(int i=0;i<n-1;i++){
    for(int j=i+1;j<n;j++){

        if(count1[i] > count1[j] || (count1[i] == count1[j] && arr[i] > arr[j])){

            swap(count1[i],count1[j]);
            swap(ans[i],ans[j]);
            swap(arr[i],arr[j]);

        }
    }
}
    for(int i=0;i<n;i++){
        cout<<ans[i]<<" ";
    }

 }