/*class Solution {
public:
   int BinarySearch(vector<int>& nums , int target){
        int result = -1 ;
        int s = 0 ;
        int e = nums.size()-1;
        while(s<=e){
            int mid = (s+e)/2;
            if(nums[mid]<target){
                s = mid + 1 ;
            }
            else if (nums[mid]>target){
                e = mid-1;
            }
            else if (nums[mid]==target){
                result = nums[mid] ;
                break;
            }
        }
        return result;
    }
     int getCommon(vector<int>& nums1, vector<int>& nums2) {
       int result = 0;
       int finalresult;
        for(int i = 0 ; i <=nums1.size()-1 ; i++){
            result = BinarySearch(nums2,nums1[i]);
            if(nums1[i]==result){
                finalresult = nums1[i] ;
                return finalresult ;
            }
            
        }
        return -1;
    }
};
*/