/*
vector<int> newvec ;

        vector<int> pos ;
        vector<int> neg;

        for(int i = 0 ; i<nums.size() ; i++){
            if(nums[i]<0){
                neg.push_back(nums[i]);
            }
            else{
                pos.push_back(nums[i]);
            }
        }

        int i = 0 ;
        int j = 0 ;
        while(i<pos.size()){
            newvec.push_back(pos[i]);
            while(j<neg.size()){
                newvec.push_back(neg[j]);
                break;
            }
            i++;
            j++;
        }

        return newvec;
        */