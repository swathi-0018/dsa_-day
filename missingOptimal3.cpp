#include <bits/stdc++.h>
#include <vector>
using namespace std;

int missingNum(vector<int>& arrr) {
    int n = arrr.size() + 1;
    int xor1 = 0, xor2 = 0;

    // XOR all array elements
    for (int i = 0; i < n - 1; i++) {
        xor2 ^= arrr[i];
    }

    // XOR all numbers from 1 to n
    for (int i = 1; i <= n; i++) {
        xor1 ^= i;
    }

    // Missing number is the XOR of xor1 and xor2
    return xor1 ^ xor2;
}

int main() {
    vector<int> arrr = {8, 2, 4, 5, 3, 7, 1}; 
    int res = missingNum(arrr);  
    cout << res << endl;  
    return 0;
}