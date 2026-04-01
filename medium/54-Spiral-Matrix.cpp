#include<iostream>
#include<vector>
using namespace std;
int main(){
    int r,c;
    int matrix[100][100];
    vector<int>ans;
    cout<<"enter the row and coloumn = ";
    cin>>r>>c;
    cout<<"enter the row*column matrix = "<<endl;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>matrix[i][j];
        }
    }
    cout<<"the row*column matrix = "<<endl;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"the spiral matrix = ";
    int top=0,right=c-1,bottom=r-1,left=0;
    while(left<=right&&top<=bottom){

        // print top 
        for(int j=left;j<=right;j++){
            ans.push_back(matrix[top][j]);
        }
        top++;
        // print right
        for(int i=top;i<=bottom;i++){
            ans.push_back(matrix[i][right]);
        }
        right--;
        // print bottom
        if(top<=bottom){
        for(int j=right;j>=left;j--){
            ans.push_back(matrix[bottom][j]);
        }
        bottom--;
    }
        // print left 
        if(left<=right){
        for(int i=bottom;i>=top;i--){
            ans.push_back(matrix[i][left]);
        }
        left++;
    }
    }
    for(int i=0;i<ans.size();i++){
        cout<<ans[i];
    }
    return 0;

}