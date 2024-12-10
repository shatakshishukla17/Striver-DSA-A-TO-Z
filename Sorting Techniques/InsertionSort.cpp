// https://www.geeksforgeeks.org/problems/insertion-sort/0?category%5B%5D=Algorithms&page=1&query=category%5B%5DAlgorithmspage1&utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=insertion-sort

class Solution
{
    public:
    void insert(int arr[], int i)
    {
        //code here
        //recursion
        if(i<=0) return;
        int j=i;
        while(j>0&&arr[j-1]>arr[j]){
            // swap(arr[j-1], arr[j]);
            int temp=arr[j-1];
            arr[j-1]=arr[j];
            arr[j]=temp;
            j--;
        }
        
    }
     public:
    //Function to sort the array using insertion sort algorithm.
    void insertionSort(int arr[], int n)
    {
        //code here
        // for(int i=0;i<=n-1;i++){
        //     int j=i;
        //     while(j>0&&arr[j-1]>arr[j]){
        //         // swap(arr[j-1], arr[j]);
        //         int temp=arr[j-1];
        //         arr[j-1]=arr[j];
        //         arr[j]=temp;
        //         j--;
        //     }
        // }
        
        //using recursion
        if(n<=1) return;
        insertionSort(arr, n-1);
        insert(arr, n-1);
    }
};