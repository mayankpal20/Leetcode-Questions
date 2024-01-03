/*
int s = 0 ;
	int e = (nums.size()-1);
	int mid;
	sort(nums.begin(),nums.end());
	
	
	while(s<=e){
		mid = (s+e)/2;
		if(nums[mid]==target){
			return mid;
		}
		else if(nums[mid]<target){
			s = mid + 1;
		}
		else if(nums[mid]>target){
			e = mid - 1;
		}
	}
	if(nums[mid]!=target && s>e){
		return s;
	}
    return 0;
    }
*/