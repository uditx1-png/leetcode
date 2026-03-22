#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Rotate matrix 90° clockwise
void rotate(vector<vector<int>>& mat) {
    int n = mat.size();

    // Transpose
    for(int i = 0; i < n; i++){
        for(int j = i; j < n; j++){
            swap(mat[i][j], mat[j][i]);
        }
    }

    // Reverse each row
    for(int i = 0; i < n; i++){
        reverse(mat[i].begin(), mat[i].end());
    }
}

// Check if two matrices are equal
bool isEqual(vector<vector<int>>& a, vector<vector<int>>& b) {
    return a == b;
}

// Main logic
bool findRotation(vector<vector<int>>& mat, vector<vector<int>>& target) {
    for(int i = 0; i < 4; i++){ // // 4 because only 4 rotation is valid (0,90,180,270)
        if(isEqual(mat, target)){
            return true;
        }
        rotate(mat);
    }
    return false;
}

int main() {
    int n;
    cout << "Enter size of matrix: ";
    cin >> n;

    vector<vector<int>> mat(n, vector<int>(n));
    vector<vector<int>> target(n, vector<int>(n));

    cout << "Enter matrix:\n";
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> mat[i][j];
        }
    }

    cout << "Enter target matrix:\n";
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> target[i][j];
        }
    }

    if(findRotation(mat, target)){
        cout << "Yes, rotation possible ✅";
    } else {
        cout << "No, not possible ❌";
    }

    return 0;
}