#include<iostream>
using namespace std;
int main(){
    int num,a[100],count=0,sum=0;
    cout<<"enter the numbere of element the array:";
    cin>>num;
    for(int i=0;i<num;i++){
        cin>>a[i];
        if(a[i]%2==0&&a[i]%3==0){
            sum+=a[i];
            count++;
        }
        
    }
    if(count==0)
    return 0;
    cout<<sum/count;
}