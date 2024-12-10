// Question link: https://www.geeksforgeeks.org/problems/armstrong-numbers2727/1

// User function Template for C++
class Solution {
  public:
    string armstrongNumber(int n){
        // code here
        int ans=0;
        int temp=n;
        int num=0;
        while(n){
            num = n%10;
            ans=ans+(num*num*num);
            n=n/10;
            num=0;
        }
        if(ans==temp){
            return "Yes";
        }else{
            return "No";
        }
    }
};