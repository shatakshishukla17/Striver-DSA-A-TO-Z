// https://leetcode.com/problems/valid-palindrome

class Solution {
public:
    bool isPalindrome(string s) {
        
        const regex pattern("[^a-zA-Z0-9]");

        // Replace all non-alphanumeric characters with an empty string.
        s = regex_replace(s, pattern, "");

        // Convert all uppercase letters to lowercase letters.
        for (int i = 0; i < s.length(); i++) {
            s[i] = tolower(s[i]);
        }
        
        int i=0;
        int j=s.length()-1;
        while(i<j){
            if(s[i]==s[j]){
                i++;
                j--;
            }else{
                return false;
            }
        }
        return true;
    }
};