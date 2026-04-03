#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool searchMatrix(vector<vector<int>>& matrix,int target){
    int m=matrix.size();
    int n=matrix[0].size();
    int row=0;
    int col=n-1;
    while(row<m && col>=0){
        if(matrix[row][col]==target){
            return true;
        }
        else if(matrix[row][col]<target){
            row++;
        }
        else{
            col--;
        }
    }
    return false;
}
int main(){
    int r,c;
    cout<<"enter the row and coloumn = ";
    cin>>r>>c;
    vector<vector<int>> matrix(r, vector<int>(c));
    cout<<"enter the row*column matrix = "<<endl;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>matrix[i][j];
        }
    }
    int target;
    cout<<"enter the target = ";
    cin>>target;
    if(searchMatrix(matrix, target)){
        cout << "Element Found" << endl;
    }
    else{
        cout << "Element Not Found" << endl;
    }
}