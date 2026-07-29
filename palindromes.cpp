#include<bits/stdc++.h>
using namespace std;
 int main(){
    int reverse= 0;
    int lad;
    int n;
    cin>> n;
    int dup = n;
    while (n>0){
        lad=n%10;
        n=n/10;
        reverse= (reverse*10)+lad;

    }
    if(dup==reverse){
        cout <<"palidrome";
    }
    else{
        cout <<"not a palidrome";   
    }
        return 0;
 }