#include<iostream>
using namespace std;
int main(){
    int n , k,a[19],i=0,b[88];
    cin>>n;
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"enter the k position";
    cin>>k;
    while(i<=0){
        if(a[i]==a[i+1]||a[i]==a[i-1])
        i++;
        else if(a[i]!=a[i+1]){
            for(i=0;i<n;i++){
                b[i]=a[i];
            }
        }
        else{
            return -1;
        }
    }
    for(i=0;i<n;i++){
        cout<<b[k];
    }

}