/*
vector<int> newvec(nums);
        int index = 0 ;
       

        sort(nums.begin(),nums.end());
        int no = nums[nums.size()-1];
        int i = 0 ;
        while(i<nums.size()){
            if(nums[i]*2>no && no!=nums[i]){
                return -1;
            }
            i++;
        }
         for(int j = 0 ; j < newvec.size() ; j++){
            if(no==newvec[j]){
                index = j ;
                break;
            }
        }

        return index;
        
        */