#include<iostream>
#include<vector>
using namespace std;
int main(){
    int x,y,k,n;
    cout<<"enter the matrix length = ";
    cin>>n;
    cout<<"enter the row from start = ";
    cin>>x;
    cout<<"enter the coloumn from start = ";
    cin>>y;
    cout<<"enter the final row and column = ";
    cin>>k;
    vector<vector<int>>rev(n,vector<int>(n));
    cout<<"enter the matrix first = ";
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>rev[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<rev[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    cout<<endl;
    int prev = rev[x][y];

    // top row
    for(int j = y+1; j <= k; j++){
        swap(prev, rev[x][j]);
    }

    // right column
    for(int i = x+1; i <= k; i++){
        swap(prev, rev[i][k]);
    }

    // bottom row
    for(int j = k-1; j >= y; j--){
        swap(prev, rev[k][j]);
    }

    // left column
    for(int i = k-1; i > x; i--){
        swap(prev, rev[i][y]);
    }

    cout<<"reverse == "<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<rev[i][j]<<" ";
        }
        cout<<endl;
    }

}