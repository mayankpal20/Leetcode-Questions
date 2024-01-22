/*vector<int> newvec;
        int i = 0 ;
        int count = 0 ;
        while(i<nums.size()-1){
            if((nums[i]==nums[i+1]) && count <2){
                newvec.push_back(nums[i]);
                count ++ ;
            }
            else if(nums[i]!=nums[i+1] && count <2){
                newvec.push_back(nums[i]);
                count = 0 ;
            }
            else if(count == 2 && nums[i]!=nums[i+1]){
                count = 0  ;
            }
            i++; 
        }
        if(count==1 || count==0){
            newvec.push_back(nums[i]);
        }
        nums = newvec;
        return nums.size();
        */