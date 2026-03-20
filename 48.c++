#include<iostream>
using namespace std;
int main(){
    int n,i,j,a[100][100];
    cout<<"enter the number: ";
    cin>>n;
    cout<<"enter the element in array :";
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
    // for(i=0;i<n;i++){
    //     for(j=0;j<n;j++){
    //         cout<<a[i][j];
    //     }
    //     cout<<endl;
    //}
    for(i=0;i<n;i++){
        for(j=n-1;j>=0;j--){
            cout<<a[j][i];
        }
        cout<<endl;
    }

};