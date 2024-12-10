// Question link: https://www.naukri.com/code360/problems/number-crown_6581894

void numberCrown(int n) {
    // Write your code here.
    for(int i=1;i<=n;++i){
        for(int j=1;j<=i;++j){
            cout<<j<<" ";
        }
        for(int j=1;j<=2*(n-i);++j){
            cout<<setw(2)<<" ";
        }
        for(int j=i;j>=1;--j){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}

