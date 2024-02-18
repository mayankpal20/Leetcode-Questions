/*All no's are setting zeros if any zero is present in a row or column */
/*
int rowsize = matrix.size() - 1 ;
        int colsize = matrix[0].size() - 1 ;
        vector<vector<int>> tempvec(matrix);

        //For Row Wise
        for(int row1 = 0 ; row1 <=rowsize ; row1++ ){
            for(int col1 = 0 ; col1 <= colsize ; col1++){
                if(tempvec[row1][col1]==0){
                    for(int newcol=0 ; newcol <=colsize ; newcol++){
                        matrix[row1][newcol]=0;
                    }
                    break;    
                }
                
            }
        }

        //For Col Wise 
        for(int col2 = 0 ; col2 <= colsize ; col2++){
            for(int row2 = 0 ; row2 <= rowsize ; row2++){
                if(tempvec[row2][col2]==0){
                    for(int newrow=0; newrow<=rowsize ; newrow++){
                        matrix[newrow][col2]=0;
                    }
                    break;
                }
            }
        }
        */