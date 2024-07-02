// class Solution {
// public:
//     vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
//         vector<int> vec;
//         int j = 0 ;
//         sort(nums1.begin(),nums1.end());
//         sort(nums2.begin(),nums2.end());
//         for(int i = 0 ; i < nums1.size() ; i++){
//            while(j<nums2.size()){
//                 if(nums1[i]==nums2[j]){
//                     vec.push_back(nums1[i]);
//                     j++;
//                     break;
//                 }
//                 else if(nums2[j]>nums1[i]){
                    
//                     break;
//                 }
//                 else{
//                     j++;
//                 }
//             }
//         }
//         return vec;
//     }
// };