#include <iostream>
using namespace std;

void inter(int a[], int n1, int b[], int n2) {

    int hash[1000] = {0};

    // mark elements of first array
    for (int i = 0; i < n1; i++) {
        hash[a[i]] = 1;
    }

    // check elements of second array
    for (int j = 0; j < n2; j++) {

        if (hash[b[j]] == 1) {
            cout << b[j] << " ";

            // avoid duplicates
            hash[b[j]] = 0;
        }
    }
}

int main() {

    int n1, n2;

    cin >> n1 >> n2;

    int a[n1];
    int b[n2];

    for (int i = 0; i < n1; i++) {
        cin >> a[i];
    }

    for (int j = 0; j < n2; j++) {
        cin >> b[j];
    }

    inter(a, n1, b, n2);
 
    return 0;
}