/*
int s = 0 ;
        int e = nums.size()-1;
        int i = 0 ;
        if(nums.size()==2){
            if(nums[i]<nums[i+1]){
                return nums[i];
            }
            else{
                return nums[i+1];
            }
        }
        if(nums[i]<nums[e]){
            return nums[i];
        }
        while(s<e){
            int mid = (s+e)/2;
           
             if(nums[mid]>=nums[0] && nums[mid]>=nums[nums.size()-1]){
                s = mid + 1;
            }
            else{
                e = mid ;
            }
        }
        int result = nums[s];
        return result;
        */