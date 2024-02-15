/*class Solution {
    private:
    bool checkpalindrome(string s){
        int st = 0 ;
        int en = s.length()-1;
        while(st<en){
            if(s[st]==s[en]){
                st++;
                en--;
            }
            else{
                return false;
            }
        }
        return true;
    }
public:
    string firstPalindrome(vector<string>& words) {
        for(int i = 0 ; i < words.size() ; i++){
            if(checkpalindrome(words[i])){
                return words[i];
            }
        }
        return "";
    }
};
*/