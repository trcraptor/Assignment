#include <iostream>
#include <vector>
using namespace std;

vector<int> circularShift(vector<int>& A, int k) {
    int n = A.size();
    vector<int> result(n);

    // Calculate the effective shift by taking modulo n
    k = k % n;

    // Copy the elements after rotating k positions
    for (int i = 0; i < n; ++i) {
        result[(i + k) % n] = A[i];
    }

    return result;
}

int main() {
    vector<int> A = {5, 15, 29, 35, 42};
    int k = 2;

    vector<int> shiftedArray = circularShift(A, k);

    cout << "Shifted Array: ";
    for (int num : shiftedArray) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}

