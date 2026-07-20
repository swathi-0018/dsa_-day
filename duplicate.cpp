#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> arrr(n);

    for (int i = 0; i < n; i++) {
        cin >> arrr[i];
    }

    int i = 0;
    for (int j = 1; j < n; j++) {
        if (arrr[j] != arrr[i]) {
            arrr[i + 1] = arrr[j];
            i++;
        }
    }

    int newSize = i + 1;

    cout << "Array after removing duplicates: ";
    for (int k = 0; k < newSize; k++) {
        cout << arrr[k] << " ";
    }

    return 0;
}