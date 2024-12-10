// https://www.geeksforgeeks.org/problems/sum-of-first-n-terms5843/1

// User function template for C++

class Solution {
  public:
    long long sumOfSeries(long long n) {
        // code here
    //  long sum=0;
    //  for(int i=1;i<=n;i++){
    //      sum=sum+(i*i*i);
    //  }
    //  return sum;
    long long sum=(n*(n+1))/2;
   
    return sum*sum;
    }
};