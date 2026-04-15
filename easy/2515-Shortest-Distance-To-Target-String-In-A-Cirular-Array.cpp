#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int closestTarget(vector<string>& words, string target, int startIndex) {
    int n = words.size();
    int ans = INT_MAX;
    // check both directions
    for(int i = 0; i < n; i++){
        int right = (startIndex + i) % n;
        int left = (startIndex - i + n) % n;
        if(words[right] == target || words[left] == target){
            ans = i;
            break;
        }
    }
    if(ans == INT_MAX) return -1;
    return ans;
}

int main(){
    int n;
    cout<<"enter the number of term in string = ";
    cin>>n;

    vector<string> words(n);
    cout<<"enter the words = ";
    for(int i=0;i<n;i++){
        cin>>words[i];
    }

    string target;
    int startIndex;

    cout<<"enter the target element = ";
    cin>>target;

    cout<<"enter the startIndex = ";
    cin>>startIndex;

    cout<<"Minimum distance = "<<closestTarget(words,target,startIndex);
}