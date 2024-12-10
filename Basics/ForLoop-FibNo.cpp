//Question: https://www.naukri.com/code360/problems/nth-fibonacci-number_74156?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf

#include<bits/stdc++.h>
using namespace std;

//Iterative approach:
// int fib(int n){
//         if(n<=1){
//                 return n;
//         }
//         int a=0;
//         int b=1;
//         for(int i=2;i<=n;++i){
//                 int c=a+b;
//                 a=b;
//                 b=c;
//         }
//         return b;
// }

//Recursive approach:
int fib(int n){
        if(n<=1){
                return n;
        } else{
                return fib(n-1)+fib(n-2);
        }
}
int main()
{
        /*
        *  Write your code here. 
         *  Read input as specified in the question.
         *  Print output as specified in the question.
        */
        int n;
        cin>>n;
        int num=fib(n);
        cout<<num;
        return 0;
}