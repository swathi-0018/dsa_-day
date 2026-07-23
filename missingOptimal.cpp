#include <bits/stdc++.h>
#include <vector>
using namespace std;

int missingNum(vector<int> &arrr) {
    int n = arrr.size() + 1;
  
    // Calculate the sum of array elements
    int sum = 0;
    for (int i = 0; i < n - 1; i++) {
        sum += arrr[i];
    }

    // Calculate the expected sum
    long long expSum = (n *1LL* (n + 1)) / 2;  

    // Return the missing number
    return expSum - sum;
}

int main() {
    vector<int> arrr = {8, 2, 4, 5, 3, 7, 1};  
    cout << missingNum(arrr);  
    return 0;
}