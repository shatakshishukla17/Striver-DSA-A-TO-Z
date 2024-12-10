// https://www.geeksforgeeks.org/problems/print-1-to-n-without-using-loops-1587115620/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=print-1-to-n-without-using-loops

class Solution{
    public:
    //Complete this function
    void printNos(int N)
    {
        //Your code here
        if(N>0){
            printNos(N-1);
            cout<<N<<" ";
        }
    }
};