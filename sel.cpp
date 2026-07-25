#include <bits/stdc++.h>
using namespace std;
void sel_sort(int arrr[],int n){
    for(int i=0;i<n-1;i++){
        int min = i;
        for (int j=i+1;j<n;j++){
            if(arrr[j]<arrr[min]){
                min = j;
            }
        }
        int temp = arrr[i];
        arrr[i] = arrr[min];
        arrr[min] = temp;
    }
}

int main()
{
   int n;
   cin >> n;    
   int arrr[n];
   for(int i=0;i<n;i++){
         cin>> arrr[i];
   }
   sel_sort(arrr,n);
   for(int i=0;i<n;i++){
    cout << arrr[i] << " ";
   }

    return 0;
}