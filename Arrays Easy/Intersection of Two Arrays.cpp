/*
sort(nums1.begin(),nums1.end());
    sort(nums2.begin(),nums2.end());
    vector<int> tempvec;

   int i = 0 ;
  while(i<nums1.size()-1){
        if(nums1[i]!=nums1[i+1]){
            tempvec.push_back(nums1[i]);
        }
    i++;
    }
  tempvec.push_back(nums1[i]);


  int j = 0 ;
  while(j<nums2.size()-1){
        if(nums2[j]!=nums2[j+1]){
            tempvec.push_back(nums2[j]);
        }
    j++;
    }
  tempvec.push_back(nums2[j]);

    sort(tempvec.begin(),tempvec.end());
    vector<int> newvec ;
  int k = 0 ;
    while(k<tempvec.size()-1){
        if(tempvec[k]==tempvec[k+1]){
            newvec.push_back(tempvec[k]);
        }
      k++;
    }
  //newvec.push_back(tempvec[k]);

    return newvec;*/