#include <iostream>

using namespace std;

int main() {
  // Initialize the array.
  int arr[] = {1, 5, 7, -1, 5};
  int n = sizeof(arr) / sizeof(arr[0]);

  // Initialize the target sum.
  int target = 6;

  // Initialize a flag to indicate if the pair is found.
  bool found = false;

  // Iterate through the array.
  for (int i = 0; i < n; i++) {
    for (int j = i + 1; j < n; j++) {
      // If the sum of the two elements is equal to the target sum, then print the pair.
      if (arr[i] + arr[j] == target) {
        cout << "The pair is (" << arr[i] << ", " << arr[j] << ")" << endl;
      }
    }
  }
  return 0;
}
