#include<bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin >> n;
  int summ = 0;
  int dup = n;
  int lad;

  while(n > 0){
    lad = n%10;
    n=n/10;
    summ = summ + (lad*lad*lad);
  }
    if (summ == dup){
        cout << "Armstrong Number";
    }
    else{
        cout << "Not an Armstrong Number";  

  }
  return 0;

}