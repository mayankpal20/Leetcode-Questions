// class Solution {
//     private:
//     vector<int> getaverage(vector<int> v , int row){
//         vector<int> vc;
//         int avg = 0 ;
//        if(row==0){
//          avg = v[0]+v[1];
       
//        }
//        else if (row>0 && v[0]<v[2]){
//         avg = v[2]+v[1];
//         }
//         else if (row>0 && v[0]>=v[2]){
//             avg = v[0]+v[1];
//         }
//        int res = avg-v[0];
//         vc.push_back(avg);
//         vc.push_back(res);
//         return vc;
//     }
// public:
//     double averageWaitingTime(vector<vector<int>>& customers) {
       
//         double addval = 0 ;
//         int row = 0 ;
//         int tempval = 0 ;
//         vector<int> vec;
//         int count = 0 ;
//         int rowsize = customers.size();
//         int colsize = customers[0].size();
//         vector<int> tempvec;
//         for( ; row < rowsize ; row++){
            
//          for(int col = 0 ; col < colsize ; col++)
//          {
                
//             vec.push_back(customers[row][col]);
                
         
//          }
//             //for getting average
//             if(row==0){
//                  tempvec = getaverage(vec , row);
//             }
//             else{
//                 tempval = tempvec[0];
//                 vec.push_back(tempval);
//                 tempvec = getaverage(vec , row);
//                 tempval = tempvec[0];
//             }
//             count++;
//             vec.clear();
//             tempvec.clear();
//             addval = addval + tempvec[1];
            
//         }
//         double values = addval / count;
//         return values;
//     }
// };