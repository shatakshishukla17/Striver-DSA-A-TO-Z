// Question link: https://www.naukri.com/code360/problems/reverse-star-triangle_6573685

void nStarTriangle(int n) {
    // Write your code here.
    for(int i=n;i>=1;i--){
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        }
            //stars
        for(int j=1;j<=2*i-1;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
