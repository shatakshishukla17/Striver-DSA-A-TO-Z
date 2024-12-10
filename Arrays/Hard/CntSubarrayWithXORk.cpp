// https://www.interviewbit.com/problems/subarray-with-given-xor/

int Solution::solve(vector<int> &A, int B) {
    int xr=0;
    map<int, int>mpp;
    mpp[xr]++;
    int cnt=0;
    for(int i=0;i<A.size();i++){
        xr=xr^A[i];
        int x=xr^B;
        cnt+=mpp[x];
        mpp[xr]++;
    }
    return cnt;

}