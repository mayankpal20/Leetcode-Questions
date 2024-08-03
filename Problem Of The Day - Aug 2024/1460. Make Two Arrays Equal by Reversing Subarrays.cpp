// class Solution {
// public:
//     bool canBeEqual(vector<int>& target, vector<int>& arr) {
//         sort(target.begin(),target.end()) ;
//         sort(arr.begin(),arr.end()) ;
//         bool val = true ;
//         int j = 0 ;
//         for(int i = 0 ; i < arr.size() ; i++){
//             j = i ;
//             while(j<target.size()){
//                 if(arr[i] ==  target[j]){
//                     val = true ;
//                     break ;
//                 }
//                 else{
//                     return false ;
//                 }
//             }
//         }
//         return val ;
//     }
// };