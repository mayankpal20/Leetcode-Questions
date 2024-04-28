//  void solve(vector<int> nums , vector<int> op , int index , vector<vector<int>> & ans){
//         if(index >= nums.size()){
//             ans.push_back(op);
//             return ;
//         }
//         //Exclude
//         solve(nums,op,index+1,ans);

//         //Include
//         int element = nums[index];
//         op.push_back(element);
//         solve(nums,op,index+1,ans);
//     }



// vector<vector<int>> subsets(vector<int>& nums) {
//         vector<vector<int>> ans ;
//         vector<int> op;
//         int index = 0 ;
//         solve(nums , op , index , ans);
//         return ans;
//     }