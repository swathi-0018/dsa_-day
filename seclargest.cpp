#include<bits/stdc++.h>
using namespace std;
int sec_largest(int *n, int *arr){
    int larg=arr[0];
    int slargest = -1;
    for (int i=0;i<*n;i++){
        if(arr[i]>larg){
            slargest=larg;
            larg =arr[i];
        }
        if(arr[i]>slargest&&arr[i]<larg){
            slargest =arr[i];
        }
    }
    return slargest;

}
int main(){
    int n;
    cin>> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>> arr[i];

    }
    int sl=sec_largest(&n,arr);
    if(sl==-1){
        cout <<"no second largest element";
    }
    else{
        cout <<"second largest element is " << sl;
    }   
    return 0;
}