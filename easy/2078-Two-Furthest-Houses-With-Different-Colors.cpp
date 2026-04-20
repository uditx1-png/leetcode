#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int maxDistance(vector<int>& colors) {
        int n=colors.size();
        int ans=0;
            for(int i=0;i<n;i++){
                if(colors[i]!=colors[0])
                ans=max(ans,i);
                if(colors[i]!=colors[n-1])
                ans=max(ans,n-1-i);
            }
            return ans;
    }
int main(){
    int n;
    cout<<"enter the number of houses = ";
    cin>>n;

    vector<int>colors(n);
    cout<<"enter the houses = "<<endl;
    for(int i=0;i<n;i++){
        cin>>colors[i];
    }

    cout<<maxDistance(colors)<<endl;
    return 0;
}