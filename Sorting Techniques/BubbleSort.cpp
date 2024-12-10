// https://www.geeksforgeeks.org/problems/bubble-sort/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=bubble-sort

// User function Template for C++

class Solution {
  public:
    void bubbleSort(int arr[], int n) {
        // Your code here
        // for(int i=n-1;i>=0;i--){
        //     int didswap=0;
        //     for(int j=0;j<=i-1;j++){
        //         if(arr[j]>arr[j+1]){
        //             swap(arr[j], arr[j+1]);
        //             didswap=1;
        //         }
        //     }
        //     if(didswap==0){
        //     break;
        // }
        // }
        
        //using recursion
        if(n==1) return ;
        for(int j=0;j<=n-2;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j], arr[j+1]);
            }
        }
        bubbleSort(arr, n-1);
        
    }
};