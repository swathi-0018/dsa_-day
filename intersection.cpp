#include<iostream>
#include<vector>

using namespace std;

vector <int> sortedArray(vector<int> a,vector<int> b){
    vector<int> ans;

    int i=0;
    int j= 0;
    int n1;
    int n2;

    while (i<n1 && j<n2){
        if(a[i]<b[j]){
            i++;
        }
        else if(b[j]<a[i]){
            j++;
        }
        else 
        {
            ans.push_back(a[i]);
            i++;
            j++;
    }
}    
    return ans;
}
    int main(){

    vector<int> a = {1,2,2,3,4,5};
    vector<int> b = {2,3,4,4,5,6};

    vector<int> ans = sortedArray(a,b);

    for(auto x : ans){
        cout << x << " ";  
    }

    return 0;
}