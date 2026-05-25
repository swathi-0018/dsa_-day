#include<iostream>
#include<map>
using namespace std;

int better(int arr[],int n){
    map<int,int> mpp;
    for (int i = 0; i<n;i++){
         mpp[arr[i]]++;
    }
    for(auto it:mpp){
        if(it.second==1){
        return it.first;
    }
}
return -1;
    }
    int main(){

    int n;
    cin >> n;

    int arr[n];

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    cout << better(arr, n);

    return 0;
}
