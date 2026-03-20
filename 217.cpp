#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int nums, num[100];
    cout<<"Enter number of elements: ";
    cin>>nums;
    cout<<"Enter the array: ";
    for(int i = 0; i < nums; i++){
        cin>>num[i];
    }
    sort(num, num + nums);
    bool found = false;
    for(int i = 1; i < nums; i++){
        if(num[i] == num[i-1]){
            found = true;
            break;
        }
    }
    if(found)
        cout<<"Duplicate found";
    else
        cout<<"No duplicate";
}