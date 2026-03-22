#include<iostream>
using namespace std;

int main(){

    int n = 1;
    int nums[5] = {0};

    int j = 0;

    for(int i = 0; i < n; i++){
        if(nums[i] != 0){
            swap(nums[i], nums[j]);
            j++;
        }
    }

    for(int i = 0; i < n; i++){
        cout << nums[i] << " ";
    }

}