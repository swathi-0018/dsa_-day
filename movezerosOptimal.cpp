#include<bits/stdc++.h>
using namespace std;

class solution{
    public:
    vector<int>movezeros(vector<int>&arrr){
        vector<int> temp(arrr.size(),0);
        int index = 0;
        for (int i=0 ; i<arrr.size() ; i++){
            if(arrr[i]!=0){
                temp[index]=arrr[i];
                index++;

            }
        }
        for (int i=0;i<arrr.size();i++){
            arrr[i]=temp[i];
        } 
        return arrr;

    }
};
int main(){
    vector<int>arrr={0,1,0,3,1,2};
    solution sol;
    vector<int>result= sol.movezeros(arrr);
    cout << "the new array is:" ;
    for (int num: result){
        cout << num << " ";
    }
    cout << endl;
    return 0;
}