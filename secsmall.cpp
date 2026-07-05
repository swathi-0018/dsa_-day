#include<bits/stdc++.h>
#include<climits>
using namespace std;

int sec_smallest(int n, int arr[]) {

    int small = arr[0];
    int ssmall = INT_MAX;

    for (int i = 1; i < n; i++) {

        if (arr[i] < small) {
            ssmall = small;
            small = arr[i];
        }

        else if (arr[i] != small && arr[i] < ssmall) {
            ssmall = arr[i];
        }
    }

    return ssmall;
}

int main() {

    int n;
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int ssmall = sec_smallest(n, arr);

    cout << ssmall;

    return 0;
}