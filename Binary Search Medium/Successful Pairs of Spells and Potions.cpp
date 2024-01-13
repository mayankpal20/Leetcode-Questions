/*
vector<int> newvec;
        int count = 0 ;
        sort(potions.begin(),potions.end());
        for(int i = 0 ; i<=spells.size()-1 ; i++){
            int s = 0 ;
            int e = potions.size()-1;
            int size = potions.size();
            while(s<=e){
                int mid = (s+e)/2;
                if(1LL*spells[i]*potions[mid]<success){
                    s = mid + 1;
                    
                }
                else{
                    e = mid - 1 ;
                }
            }
            newvec.push_back(size-s);
            
        }
        return newvec;
        */