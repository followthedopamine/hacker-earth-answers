#include <iostream>
#include <string>
#include <vector>
using namespace std;

int checkMatrixForInversions(vector<vector<int>> matrix, int matrixSize) {
  int count = 0;
  for (int r = 0; r < matrixSize; r++) {
    for (int c = 0; c < matrixSize; c++) {
      int mainCell = matrix[r][c];
      for (int r2 = r; r2 < matrixSize; r2++) {
        for (int c2 = c; c2 < matrixSize; c2++) {
          int tempCell = matrix[r2][c2];
          if (mainCell > tempCell) count++;
        }
      }
    }
  }
  return count;
}

int main() {
  int numberOfTestcases;
  cin >> numberOfTestcases;  // Reading input from STDIN
  for (int i = 0; i < numberOfTestcases; i++) {
    int matrixSize;
    cin >> matrixSize;
    vector<vector<int>> matrix;
    for (int j = 0; j < matrixSize; j++) {
      vector<int> row;
      for (int k = 0; k < matrixSize; k++) {
        int cell;
        cin >> cell;
        row.push_back(cell);
      }
      matrix.push_back(row);
    }
    cout << checkMatrixForInversions(matrix, matrixSize) << endl;
    // for (auto xv : matrix) {
    // 	for(auto x: xv) {
    // 		cout << x << ' ';
    // 	}
    // 	cout << endl;
    // }
  }
}