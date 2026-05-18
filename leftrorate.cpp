// left rotation of an array by d places
#include <iostream>
using namespace std;

void left_rotate (int arr[],int n)
{
   int d= d%n; 
   int temp[d];
   for (int i=0;i<n;i++){
    temp[i]=arr[i];
   }
   for (int i= d;i<n;i++){
    arr[i-d]=arr[i];
   }
   for (int i=n-d;i<n;i++){
    arr[i]=temp[i-(n-d)];
   }
   return;
    }

    int main(){
        int n ;
        int d;
        cin >> n >> d;
        int arr[n];
        for (int i=0;i<n;i++){
            cin >> arr[i];
        }
        left_rotate(arr,n);
        cout << "Array after left rotation: ";
        for (int i=0;i<n;i++){
            cout << arr[i] << " ";
        }
        return 0;
    }