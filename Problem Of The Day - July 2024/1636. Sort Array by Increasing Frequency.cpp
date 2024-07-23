// class Solution {
//     vector<int> calculatingcount(int start , int num , vector<int> nums){
//         vector<int> result ;
//         int count = 1 ;
//         int j = start ;
//         for(; j < nums.size() ; j++){
//             if(num==nums[j]){
//                 count++;
//             }
//             else{
//                 break ;
//             }
//         }
//         result.push_back(count) ;
//         result.push_back(--j);
//         return result;
//     }
// public:
//     vector<int> frequencySort(vector<int>& nums) {
//         sort(nums.begin(),nums.end());
//         vector<int> no ;
//         vector<int> countingnnum ;
//         vector<int> finalvec ;
        
//         //finding count of no 
//         for(int i = 0 ; i < nums.size() ; i++){
//             vector<int> res = calculatingcount(i+1 , nums[i] , nums);
//             no.push_back(nums[i]);
//             countingnnum.push_back(res[0]);
//             i = res[1];
//             res.clear();
//         }

//         //sorting count in increasing order
//         for(int i = 0 ; i < countingnnum.size() ; i++){
//             for(int j = i + 1 ; j < countingnnum.size() ; j++){
//                 if(countingnnum[i]>countingnnum[j]){
//                     swap(no[i],no[j]) ;
//                     swap(countingnnum[i],countingnnum[j]);
//                 }
//                 else if(countingnnum[i]==countingnnum[j]){
//                         if(no[i]<no[j]){
//                               swap(no[i],no[j]);  
//                               swap(countingnnum[i],countingnnum[j]);
//                         }
//                 }
//             }
//         }

//         //inserting elements based on count 
//         for(int i = 0 ; i < countingnnum.size() ; i++){
//             for(int j = 0 ; j < countingnnum[i] ; j++){
//                 finalvec.push_back(no[i]) ;
//             }
//         }

//         return finalvec ;

//     }
// };