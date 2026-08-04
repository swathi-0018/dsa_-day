#include<bits/stdc++.h>
using namespace std;

class solution{
    public:
    vector<int>movezeros(vector<int>&arr){
        vector<int> temp(arr.size(),0);
        int index = 0;
        for (int i=0 ; i<arr.size() ; i++){
            if(arr[i]!=0){
                temp[index]=arr[i];
                index++;

            }
        }
        for (int i=0;i<arr.size();i++){
            arr[i]=temp[i];
        } 
        return arr;

    }
};
int main(){
    vector<int>arr={0,1,0,3,1,2};
    solution sol;
    vector<int>result= sol.movezeros(arr);
    cout << "the new array is:" ;
    for (int num: result){
        cout << num << " ";
    }
    cout << endl;
    return 0;
}