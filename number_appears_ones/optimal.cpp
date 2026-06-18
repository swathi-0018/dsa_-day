#include<bits/stdc++.h>
using namespace std;

int main(){
    int xr = 0;
    int n;
    cin >> n;
    int arr[n];
    for(int i=0 ; i<n ; i++){
        cin >> arr[i];
    }
    for(int i = 0 ; i < n ; i++){
        xr = xr^arr[i];

    }
    cout << xr;
    return 0;
}