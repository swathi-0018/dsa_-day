//longest subarray with given sum k;

#include <bits/stdC++.h>
using namespace std;

int main() {
    int n, K;
    cin >> n;

    int a[n];
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    cin >> K;

    int len = 0;

    for(int i = 0; i < n; i++) {
        for(int j = i; j < n; j++) {

            int s = 0;

            for(int k = i; k <= j; k++) {
                s += a[k];
            }

            if(s == K) {
                len = max(len, j - i + 1);
            }
        }
    }
    cout << len;

    return 0;
}