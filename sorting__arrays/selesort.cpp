#include <bits/stdc++.h>
using namespace std;
void sel_sort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        int min = i;
        for (int j=i+1;j<n;j++){
            if(arr[j]<arr[min]){
                min = j;
            }
        }
        int tem = arr[i];
        arr[i] = arr[min];
        arr[min] = tem;
    }
}

int main()
{
   int n;
   cin >> n;    
   int arr[n];
   for(int i=0;i<n;i++){
         cin>> arr[i];
   }
   sel_sort(arr,n);
   for(int i=0;i<n;i++){
    cout << arr[i] << " ";
   }

    return 0;
}