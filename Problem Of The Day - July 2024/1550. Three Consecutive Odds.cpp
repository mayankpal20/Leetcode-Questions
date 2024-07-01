// class Solution {
// public:
//     bool threeConsecutiveOdds(vector<int>& arr) {
        //MainCode
//         bool val = false;
//         int count = 0 ;
//         for(int i = 0 ; i < arr.size() ; i++){
//             if(arr[i]%2!=0 || arr[i]==1){
//                 count++;
//                 if(count==3){
//                     return true;
//                 }
//             }
//             else if(arr[i]%2==0 || arr[i]==0){
//                 count = 0 ;
//             }
//         }
//         return val;
//     }
// };