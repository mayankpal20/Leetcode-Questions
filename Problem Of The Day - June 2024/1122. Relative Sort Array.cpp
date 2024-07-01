#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    vector<int> arr1 = {2,3,1,3,2,4,6,7,9,2,19};
    vector<int> arr2 = {2,1,4,3,9,6};

    vector<int> vec;
        vector<int> nsort;
        // To Sort elements according to arr2
        for(int i = 0 ; i < arr2.size() ; i++){
            for(int j = 0 ; j < arr1.size() ; j++){
                if(arr2[i]==arr1[j]){
                    vec.push_back(arr1[j]);
                }
            }

        }

        // Elements which are not in arr2
         for(int i = 0 ; i < arr1.size() ; i++){
            for(int j = 0 ; j < arr2.size() ; j++){
                if(arr1[i]==arr2[j]){
                    break;
                }
                else if(arr1[i]!=arr2[j] && j==arr2.size()-1){
                    nsort.push_back(arr1[i]);
                }
            }

        }

        sort(nsort.begin() , nsort.end());
        for(int k : nsort){
            vec.push_back(k);
        }
        for(int fc : vec){
            cout << fc << endl;
        }
}