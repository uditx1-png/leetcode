#include<iostream>
#include<vector>
#include<algorithm>
#include <iomanip>

using namespace std;
int main(){
    int n1,n2,nums1[100],nums2[100],result[200];
    cout<<"enter the number n1 = ";
    cin>>n1;
    cout<<"enter the matrix "<< n1<<" = ";
    for(int i=0;i<n1;i++){
        cin>>nums1[i];
    }
    cout<<"enter the number n2 = ";
    cin>>n2;
    cout<<"enter the matrix "<< n2<<" = ";
    for(int i=0;i<n2;i++){
        cin>>nums2[i];
    }
    int k=0;
    for(int i=0;i<n1;i++){
        result[k++]=nums1[i];
    }
    for(int i=0;i<n2;i++){
        result[k++]=nums2[i];
    }
    int total=n1+n2;
    sort(result,result+(n1+n2));
    cout<<"concatenate of both matrix:"<<endl;
    for(int i=0;i<total;i++){
        cout<<result[i]<<" ";
    }
    cout<<endl;
    // Median
    double median;
    if(total % 2 == 0){
        median = (result[total/2 - 1] + result[total/2]) / 2.0;
    } else {
        median = result[total/2];
    }

    cout << fixed << setprecision(5) << median;

    return 0;
}