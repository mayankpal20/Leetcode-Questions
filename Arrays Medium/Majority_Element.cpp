/*
 sort(nums.begin(),nums.end());
	int result = 0 ;
	int check = (nums.size())/2;
	int i = 0 ;
	int count = 0 ;
	int temp = 0 ;
	if(nums.size()==1){
		return nums[i];
	}
    if(nums.size()==2 && nums[i]==nums[i+1]){
        return nums[i];
    }
	while(i<=nums.size()-1){
		if(nums[i]==nums[i+1]){
		  
		  temp = temp + 1 ;
		  
				
		}
		else{
			count = temp+1;
            if(count>check)
            {
               result = nums[i-1]; 
             
            } 
            temp = 0;
            
		}
		i++;
	}
	
	return result;
    */