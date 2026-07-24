#include<bits/stdc++.h>
using namespace std;
void move_zeros(int arrr[],int n){
    int j =-1;
    for(int i=0;i<n;i++){
        if(arrr[i]==0){
            j=i;
            break;
             
        }
    }
    for(int i=j+1;i<n;i++){
        if(arrr[i]!=0){
            swap(arrr[i],arrr[j]);
            j++;
        }
    }       
}
int main(){
    int n;
    cin >> n;
    int arrr[n];
    for (int i=0;i<n;i++){
        cin >> arrr[i];
    }
    move_zeros(arrr,n);
    cout << "Array after moving zeros to the end: ";
    for (int i=0;i<n;i++){
        cout << arrr[i] << " ";
    }
    return 0;
}