//
// Created by Qi Song on 2/8/18.
//

#include "RotateImage.h"

void RotateImage::rotate(vector<vector<int>> &matrix) {
    //(i, j) -> (j, n - 1 - i)
    size_t n = matrix.size();
    for(int i = 0; i < (n + 1)/2; i++){
        for(int j = i; j < n - i - 1; j++) {
            int tmp = matrix[i][j];
            matrix[i][j] = matrix[n - j - 1][i];
            matrix[n - j - 1][i] = matrix[n - i - 1][n - j - 1];
            matrix[n - i - 1][n - j - 1] = matrix[j][n - i - 1];
            matrix[j][n - i - 1] = tmp;
        }
    }
}

void RotateImage::print(vector<vector<int>> &matrix) {
    for(auto x: matrix){
        for(auto y: x){
            cout << y << ",";
        }
        cout << endl;
    }
}

void RotateImage::run() {
    vector<vector<int>> matrix = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    cout << "origin" << endl;
    print(matrix);
    rotate(matrix);
    cout << "rotate" << endl;
    print(matrix);

    vector<vector<int>> matrix2 = {{ 5, 1, 9,11}, { 2, 4, 8,10}, {13, 3, 6, 7}, {15,14,12,16}};
    cout << "origin" << endl;
    print(matrix2);
    rotate(matrix2);
    cout << "rotate" << endl;
    print(matrix2);
}

