#include<iostream>
using namespace std;

int main(){
  int n;
  cin >> n;
  int sum = 0;
  int dup = n;
  int ld;

  while(n > 0){
    ld = n%10;
    n=n/10;
    sum = sum + (ld*ld*ld);
  }
    if (sum == dup){
        cout << "Armstrong Number";
    }
    else{
        cout << "Not an Armstrong Number";  

  }
  return 0;

}