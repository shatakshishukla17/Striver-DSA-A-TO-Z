// Question link: https://www.naukri.com/code360/problems/alpha-ramp_6581888

void alphaRamp(int n) {
    // Write your code here.
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<char('A'+i-1)<<" ";
        }
        cout<<endl;
    }
}
