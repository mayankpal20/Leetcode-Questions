/*
  int i = 0 ;
	int result;
    sort(nums.begin(),nums.end());
    if(nums.size()==1){
        result = nums[i];
        return result;
    }
	while(i<=(nums.size()-1)){
		if(i==0 && nums[i]!=nums[i+1]){
			result = nums[i];
			break;
		}
		
		else if (i!=0 && nums[i]!=nums[i+1] && nums[i]!=nums[i-1]){
			result = nums[i];
			break;
		}
		i++;
		
	
	}
	return result ;	
    }
    */