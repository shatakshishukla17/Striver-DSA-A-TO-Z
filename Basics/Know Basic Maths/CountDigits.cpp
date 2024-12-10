// Question link: https://www.geeksforgeeks.org/problems/count-digits5716/1
class Solution{
public:
    int evenlyDivides(int N){
        //code here
        int count=0;
        int temp=N;
        while(N>0){
            int lastdigit=N%10;
            if(lastdigit!=0 && temp%lastdigit==0){
                count++;
            }
            N=N/10;
        }
        return count;
        
        
    }
};