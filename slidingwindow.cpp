#include<iostream>
#include<set>
using namespace std;

int main(){

    string s;
    cin >> s;

    set<char> st;

    int left = 0;
    int maxLen = 0;

    for(int right = 0; right < s.size(); right++){

        while(st.count(s[right])){

            st.erase(s[left]);
            left++;
        }

        st.insert(s[right]);

        maxLen = max(maxLen, right - left + 1);
    }

    cout << maxLen;

    return 0;
}