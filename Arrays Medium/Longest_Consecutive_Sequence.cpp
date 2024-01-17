/*sort(nums.begin(),nums.end());
        int precount = 1 ;
        int count = 0 ;
        int i = 0 ;
        if(nums.size()==0){
            return 0;
        }
        if(nums.size()==1){
            return 1;
        }
        if(nums.size()==2){
            if(nums[i]+1 != nums[i+1]){
                return 1 ;
            }
            else{
                return 2;
            }
        }
        while(i<nums.size()-1){
            if(nums[i]==nums[i+1]){

            }
            else if(nums[i]+1 == nums[i+1]){
                precount = precount + 1 ;
            }
            else{
                count = max(count,precount);
                precount = 1 ;
            }
            i++;
        }
        if(precount>count){
            count = precount;
        }
        return count;
        */