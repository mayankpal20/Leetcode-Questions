/*
 int s = 0 ;
        int e = num ;
        while(s<=e){
            int mid = (s+e)/2;
            if(1LL*mid*mid==num){
                return true;
            }
            else if((1LL*mid*mid) > num){
                e = mid - 1 ;
            }
            else{
                s = mid + 1;
            }
        }
        return false;
        */