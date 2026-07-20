#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int arrr[n];
    for (int i= 0;i<n;i++){
        cin >> arrr[i];
    }
    int largest = arrr[0];
    for (int i=0;i<n;i++){
        if(arrr[i]>largest){
            largest = arrr[i];
        }
    }
    cout << "largest element is " << largest;
    return 0;   
}