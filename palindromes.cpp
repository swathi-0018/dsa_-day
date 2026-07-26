#include<bits/stdc++.h>
using namespace std;
 int main(){
    int rever= 0;
    int lad;
    int n;
    cin>> n;
    int dup = n;
    while (n>0){
        lad=n%10;
        n=n/10;
        rever= (rever*10)+lad;

    }
    if(dup==rever){
        cout <<"palidrome";
    }
    else{
        cout <<"not a palidrome";   
    }
        return 0;
 }