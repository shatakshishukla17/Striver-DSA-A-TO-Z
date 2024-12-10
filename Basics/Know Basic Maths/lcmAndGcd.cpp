// Question: https://www.geeksforgeeks.org/problems/lcm-and-gcd4516/1

class Solution {
  public:
  long long gcd(long long a, long long b) {
      if(a==0){
          return b;
          
      }
      if(b==0){
          return a;
      }
      if(a==b){
          return a;
      }
      if(a>b){
          return gcd(a-b, b);
      }
      return gcd(a, b-a);
      
  }
  
  long long lcm(long long a, long long b ){
      return (a/gcd(a,b))*b;
  }
    vector<long long> lcmAndGcd(long long A , long long B) {
        // code here
        return {lcm(A,B), gcd(A, B)};
        
        
    }
};