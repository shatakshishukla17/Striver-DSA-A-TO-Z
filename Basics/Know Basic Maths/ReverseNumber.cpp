// Question: https://leetcode.com/problems/reverse-integer

class Solution {
public:
    int reverse(int x) {
        long rev_num=0;
        int num=x;

        while(x){
            rev_num=rev_num*10+x%10;
            x=x/10;
        }
        if(rev_num>INT_MAX || rev_num<INT_MIN) return 0;
        return rev_num;
    }
};