#include <bits/stdc++.h>
using namespace std;

int getlongestSubarray(vector<int>& a,int k){
    map<long long,int>presumMap;
    long long sum=0;
    int maxLen = 0;
    for(int i = 0;i < a.size(); i++){
        sum += a[i];
        if(sum==k){
            maxLen= max(maxLen,i+1);
        }
        long long rem = sum-k;

        if(presumMap.find(rem) != presumMap.end()){
            int len = i-presumMap[rem];
            maxLen = max(maxLen , len);
        }

        if(presumMap.find(sum) == presumMap.end()){
            presumMap[sum] = i;
        }
    }

    return maxLen;

}

int main(){
    int n;
    cin >> n;
    vector<int> a(n) ;
    for(int i=0;i<n; i++){
        cin >> a[i];
    }
    int k;
    cin >> k;
    cout << getlongestSubarray(a,k);
    return 0;
    
}