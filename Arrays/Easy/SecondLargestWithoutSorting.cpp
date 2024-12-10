// https://www.geeksforgeeks.org/problems/second-largest3735/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=second-largest

//User function template for C++
class Solution{
public:	
	// Function returns the second
	// largest elements
	int print2largest(int arr[], int n) {
	    // code here
	    if(sizeof(arr)==1){
	        return -1;
	    }
	    int largest=INT_MIN;
	    int second=-1;
	    for(int i=0;i<n;i++){
	        if(arr[i]>largest){
	            largest=arr[i];
	        }
	    }
	    for(int i=0;i<n;i++){
	        if(arr[i]>second && arr[i]!=largest){
	            second=arr[i];
	        }
	    }
	    return second;
	}
};