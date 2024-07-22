// class Solution {
//     vector<int> gettingcount(char ch , int start , vector<char> vec){
//         int count = 1 ;
//         int i = start ;
//         vector<int> res ;
//         for( ; i < vec.size() ; i++){
//             if(ch==vec[i]){
//                 count++ ;    
//             }
//             else{
//                 break ;
//             }
//         }

//         res.push_back(count) ;
//         res.push_back(--i);

//         return res ;
//     }
// public:
//     int compress(vector<char>& chars) {
//         vector<char> tempvec(chars) ;
//         chars.clear();
        
//         for(int i = 0 ; i < tempvec.size() ; i++){
//             vector<int> getres = gettingcount(tempvec[i] , i+1 , tempvec) ;
             
//             chars.push_back(tempvec[i]);
//             if(getres[0]<=9 && getres[0]!=1){
//                 char32_t  ct = getres[0];
//                 chars.push_back(getres[0] + '0');
//             }
//             else if(getres[0]!=1 && getres[0]>9)
//             {
//                string no = to_string(getres[0]) ;
//                  for(int j = 0 ; j < no.length() ; j++){
//                     chars.push_back(no[j]);
//                  }
                
//             }
//             i = getres[1] ;
//             getres.clear();
            
//         }
//         return chars.size() ;
//     }
// };