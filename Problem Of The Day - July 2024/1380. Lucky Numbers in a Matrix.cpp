// class Solution {
//     bool checkingno(int no , vector<vector<int>> newmatrix , int row1 , int col1){
        
//         bool val = true ;
//         for(int row = 0 ; row < newmatrix.size() ; row++){
//             for(int col = 0 ; col < newmatrix[0].size() ; col++)
//             {
//                 if(col==col1){
//                     if(newmatrix[row][col]<=no){
                        
//                     }
//                     else{
//                         return false;
//                     }
//                 }
//                 else if(row==row1)
//                 {
//                     if(newmatrix[row][col]>no){

//                     }
//                     else{
//                         return false;
//                     }
//                 }
//             }
//         }
//         return val ;
//     }
    
// public:
//     vector<int> luckyNumbers (vector<vector<int>>& matrix) {
//         vector<int> res ;
        
//         int rowsize = matrix.size() ;
//         int colsize = matrix[0].size() ;
//         for(int row = 0 ; row < rowsize ; row++)
//         {
//             for(int col = 0 ; col < colsize ; col++)
//             {
//                 bool val = checkingno(matrix[row][col] , matrix , row , col);
//                 if(val==true){
//                     res.push_back(matrix[row][col]) ;
//                 }
//             }

//         }
//         return res ;
//     }
// };