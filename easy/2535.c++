#include<iostream>
using namespace std;
int main(){
    int num,a[100],sum=0,ans=0,rem;
    cout<<"enter the number in element in array:";
    cin>>num;
    for(int i=0;i<num;i++){
        cin>>a[i];
        sum+=a[i];
        int temp = a[i];
        while(temp > 0){
            ans+= temp % 10;   // add last digit
            temp /= 10;                   // remove last digit
        }
    }
    cout<< sum-ans;
    return 0;
}