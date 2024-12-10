// Question link: https://www.naukri.com/code360/problems/alpha-triangle_6581429

void alphaTriangle(int n) {
    // Write your code here.
    for(int i=1;i<=n;i++){
        for(int j=n;j>=n-i+1;j--){
            cout<<char('A'+j-1)<<" ";
        }
        cout<<endl;
    }
}

