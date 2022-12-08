#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

vector<int> rotateArray(int numberOfElements, vector<int> arrayToRotate, int stepsOfRotation) {
  stepsOfRotation = stepsOfRotation % numberOfElements;
  rotate(arrayToRotate.begin(), arrayToRotate.begin() + (numberOfElements - stepsOfRotation), arrayToRotate.end());
  return arrayToRotate;
}

int main() {
  int testCases;

  cin >> testCases;

  for (int t = 0; t < testCases; t++) {
    int numberOfElements;
    int stepsOfRotation;
    vector<int> arrayToRotate;
    cin >> numberOfElements;
    cin >> stepsOfRotation;
    for (int i = 0; i < numberOfElements; i++) {
      int element;
      cin >> element;
      arrayToRotate.push_back(element);
    }
    for (int v : rotateArray(numberOfElements, arrayToRotate, stepsOfRotation)) {
      cout << v << " ";
    }
    cout << endl;
  }
}