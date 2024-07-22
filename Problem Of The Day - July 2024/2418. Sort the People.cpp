// class Solution {
// public:
//     vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
//        vector<string> newst ;
//         vector<int> newin(heights) ;

//         // for sort heights
//         for(int i = 0 ; i < newin.size() ; i++){
//             for(int j = i + 1 ; j < newin.size() ; j++){
//                 if(newin[i]<newin[j]){
//                     swap(newin[i] , newin[j]) ;
//                 }
//             }
//         }

//         //find index for that height from sorted vector
//         for(int i = 0 ; i < newin.size() ; i++){
//             for(int j = 0 ; j < heights.size() ; j++){
//                 if(newin[i]==heights[j]){
//                     //pushing element into new vector after picking element from that specific index which we get from heights vector
//                     newst.push_back(names[j]);
//                 }
//             }
//         }

//         return newst ;
//     }
// };