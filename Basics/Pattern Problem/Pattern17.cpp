// Question link: https://www.naukri.com/code360/problems/alpha-hill_6581921

void alphaHill(int n) {
    // Write your, code here.
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        }
        for(int j=1;j<=i;j++){
            cout<<char('A'+j-1);
            if(j<i){
                cout<<" ";
            }
        }
        for(int j=i-1;j>=1;--j){
            cout<<" "<<char('A'+j-1);
        }
        
        cout<<endl;
    }
}

