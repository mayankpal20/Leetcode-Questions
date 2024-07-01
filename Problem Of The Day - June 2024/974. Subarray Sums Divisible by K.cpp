#include<iostream>
#include<vector>
using namespace std;

int checkingsumandk(int start , vector<int> v , int value){
        int filtres = 0 ;
        int sum = 0 ;
        int ccount = 0;
        for(int j = start ; j < v.size() ; j++){
            sum = sum + v[j];
            if(sum%value==0){
                ccount++;
                
            }

        }
        return ccount ;
    }
int main(){
    int result = 0 ;
        int filtres=0;
        int k = 5;
        vector<int> nums = {4,5,0,-2,-3,1};
        for(int i = 0 ; i < nums.size() ; i++){
           result = checkingsumandk(i,nums,k);
           filtres = filtres + result;
            
        }
        cout << filtres << endl;
}