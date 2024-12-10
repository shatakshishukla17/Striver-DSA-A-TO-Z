// Question: https://leetcode.com/problems/palindrome-number

class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0){
            return false;
        }
        int temp=x;
        long rev_num;
         while(x!=0){
            rev_num=rev_num*10+x%10;
            x=x/10;
        }
        if(temp==rev_num){
            return true;
        } else{
            return false;
        }
        
    }
};