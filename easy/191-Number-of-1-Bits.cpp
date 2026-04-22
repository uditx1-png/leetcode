#include<iostream>
using namespace std;
int hammingWeight(int n) {
        int rem=0,count=0;
        while(n!=0){
        rem=n%2;
        if(rem==1)
            count++;
        n=n/2;
        }
        return count;
    }
int main(){
    int n;
    cout<<"enter the number = ";
    cin>>n;
    cout<<hammingWeight(n)<<endl;
}
