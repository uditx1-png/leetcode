#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void rotate(vector<vector<int>>& matrix){
    int n=matrix.size();
    // transpose
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            swap(matrix[i][j],matrix[j][i]);
        }
    }
    // reveerse
    for(int i=0;i<n;i++){
        int start=0,end=n-1;
        while(start<end){
            swap(matrix[i][start],matrix[i][end]);
            start++;
            end--;
        }
    }
}
int main(){
    int r,c;
    cout<<"enter the row and coloumn = ";
    cin>>r>>c;
    vector<vector<int>> matrix(r, vector<int>(c));
    if(r != c){
        cout << "Rotation using this method is only possible for square matrix." << endl;
        return 0;
    }
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
    rotate(matrix);

    cout << "Rotated Matrix (90 degree clockwise) = " << endl;
    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}