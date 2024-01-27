/* vector<bool> primevec(n+1,true);
        int count = 0 ;
        primevec[0]=primevec[1]=false;

        for(int i = 2 ; i < n ; i++){

            if(primevec[i]){
                count++;
                 for(int j = 2 * i ; j<n ; j=j+i){
                primevec[j]=0;
            }
            }

           
        }
        return count;
        */