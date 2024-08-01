// class Solution {
// public:
//     int countSeniors(vector<string>& details) {
//         vector<int> vec ;
//         for(int i = 0 ; i < details.size() ; i++){
//             string  s = details[i] ;
//             string temp = "";
//             for(int j = 11 ; j < 13 ; j++){
//                     temp = temp + s[j] ;
//             }
//             int no = stoi(temp) ;
//             vec.push_back(no) ;
//         }

//         int count = 0 ;
//         for(int i = 0 ; i < vec.size() ; i++){
//             if(vec[i]>60){
//                 count++;
//             }
//         }
//         return count;
//     }
// };