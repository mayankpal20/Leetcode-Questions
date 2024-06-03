/*
class Solution {
public:
    int appendCharacters(string s, string t) {
        int count = 0 ;
        int j = 0 ;
        for(int i = 0 ; i < s.length() ; i++){
            while(j<t.length()){
                if(s[i]==t[j]){
                    j++;
                    break;
                }
                else{
                    break;
                }
            }
        }

        for(int k = j ; k < t.length() ; k++){
            count++;
        }

        return count;
    }
};
*/