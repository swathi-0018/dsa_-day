#include<bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin >> n;
  int sum = 0;
  int dup = n;
  int lad;

  while(n > 0){
    lad = n%10;
    n=n/10;
    sum = sum + (lad*lad*lad);
  }
    if (sum == dup){
        cout << "Armstrong Number";
    }
    else{
        cout << "Not an Armstrong Number";  

  }
  return 0;

}