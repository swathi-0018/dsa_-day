#include<bits/stdc++.h>
using namespace std;

void maxoness(int arr[],int n){
   int count =0;
   int maxi =0;
   for (int i=0;i<n;i++){
    if(arr[i]==1){
        count++;
        if(count>maxi){
            maxi=count;

        }
        else{
            count=0;
        }
    }
    
   }
   cout << maxi;
}
int main(){
    int n;
    cin>> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>> arr[i];
    }
    maxoness(arr,n);
  

    return 0;
    }
    
