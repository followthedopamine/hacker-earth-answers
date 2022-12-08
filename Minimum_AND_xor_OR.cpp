#include <algorithm>
#include <climits>
#include <iostream>
#include <vector>

using namespace std;

int andXorOr(int n1, int n2) {
  return n1 ^ n2;
}

int checkArrayForMinXor(vector<int> array) {
  int minXor = INT_MAX;
  sort(array.begin(), array.end());
  for (int i = 0; i < array.size() - 1; i++) {
    minXor = min(minXor, andXorOr(array[i], array[i + 1]));
  }
  return minXor;
}

int main() {
  int testCases;

  cin >> testCases;

  for (int t = 0; t < testCases; t++) {
    int numberOfElements;
    cin >> numberOfElements;
    vector<int> array;
    for (int i = 0; i < numberOfElements; i++) {
      int element;
      cin >> element;
      array.push_back(element);
    }
    cout << checkArrayForMinXor(array) << endl;
  }
}