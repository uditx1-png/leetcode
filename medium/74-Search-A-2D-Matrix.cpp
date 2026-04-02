#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool searchMatrix(vector<vector<int>>& matrix,int target){
    int start=0,end=(matrix.size()*matrix[0].size())-1;
    while(start<=end){
        int mid= start+(end-start)/2;
        int row=mid/(matrix[0].size());
        int col=mid%(matrix[0].size());
        if(matrix[row][col]==target){
            return true;;
        }
        else if(matrix[row][col]<target){
            start=mid+1;
        }
        else{
            end=mid-1;
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
    cout<<searchMatrix(matrix,target);
    return 0;
}