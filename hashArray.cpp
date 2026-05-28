#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "The array size is: ";
    cin >> n;

    int arr[n];

    cout << "Enter array elements:\n";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int hash[13] = {0};

    for(int i = 0; i < n; i++) {
        hash[arr[i]] += 1;
    }

    int q;

    cout << "How many queries: ";
    cin >> q;

    while(q--) {
        int number;

        cout << "Enter the number to check: ";
        cin >> number;

        cout << hash[number] << endl;
    }

    return 0;
}