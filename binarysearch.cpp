#include <bits/stdc++.h>
using namespace std;

int binarySearch(int arrr[], int n, int target) {

    int low = 0;
    int high = n - 1;

    while(low <= high) {

        int mid = (low + high) / 2;

        if(arrr[mid] == target) {
            return mid;
        }

        else if(arrr[mid] < target) {
            low = mid + 1;
        }

        else {
            high = mid - 1;
        }
    }

    return -1;
}

int main() {

    int n;
    cin >> n;

    int arrr[n];

    for(int i = 0; i < n; i++) {
        cin >> arrr[i];
    }

    int target;
    cin >> target;

    int ans = binarySearch(arrr, n, target);

    if(ans == -1)
        cout << "Not Found";
    else
        cout << "Found at index " << ans;

    return 0;
}