#include <iostream>
#include <map>
using namespace std;

int findOnce(int arr[], int n) {
    map<int, int> mpp;

    // Count frequency of each element
    for (int i = 0; i < n; i++) {
        mpp[arr[i]]++;
    }

    // Find the element that appears only once
    for (auto it : mpp) {
        if (it.second == 1) {
            return it.first;
        }
    }

    return -1; // If no such element exists
}

int main() {
    int n;
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Element appearing once: " << findOnce(arr, n);

    return 0;
}