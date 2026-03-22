#include<iostream>
using namespace std;

// function to check prime
bool isPrime(int n){
    if(n<2)
    return false;
    for(int i=2;i<n;i++){
        if(n%i==0)
        return false;
    return true;
}
}
int main(){

    int start,end;
    int totalCount=0;

    cin>>start>>end;

    for(int i=start;i<=end;i++){

        int n=i;
        int ones=0;
        while(n>0){
            int rem=n%2;
            if(rem==1)
            ones++;
            cout<<rem;
            n/=2;
        }
        if(isPrime(ones)){
            totalCount++;
        }
    }
    cout<<"Total numbers having prime 1's = "<<totalCount;
}
