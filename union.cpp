//brute force approach;

#include<iostream>
#include<vector>
#include<set>
using namespace std;

vector<int> sortedArray(vector<int> a, vector<int> b) {
    
    int n1 = a.size();
    int n2 = b.size();

    set<int> st;

    for(int i = 0; i < n1; i++) {
        st.insert(a[i]);
    }

    for(int i = 0; i < n2; i++) {
        st.insert(b[i]);
    }

    vector<int> result(st.begin(), st.end());

    return result;
}

int main() {

    vector<int> a = {1,2,3,4,5};
    vector<int> b = {2,3,4,6,7};

    vector<int> ans = sortedArray(a,b);

    for(auto x : ans) {
        cout << x << " ";
    }

    return 0;
}