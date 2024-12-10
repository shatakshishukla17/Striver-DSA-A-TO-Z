// Question link: https://www.naukri.com/code360/problems/rotated-triangle_6573688

void nStarTriangle(int n) {
    // Write your code here.
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<"*";
        } 
        cout<<endl;
    }
    for(int i=n;i>=1;i--){
        for(int j=1;j<=i-1;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}