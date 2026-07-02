#include <bits/stdc++.h>
using namespace std;

void missing(int arr[],int n){
    int hash[n+1] ={0};
    for (int i = 0; i<n;i++){
        hash[arr[i]]=1;
    }
    for(int i=1;i<=n+1;i++){
        if(hash[i] == 0){
            cout << i;
            break;
        }
    }
}

int main(){
    int n;
    cin >> n;
    int arr[n];
    for (int i=0;i<n;i++){
        cin >> arr[i];
    }
    missing(arr, n);
    
    return 0;
}