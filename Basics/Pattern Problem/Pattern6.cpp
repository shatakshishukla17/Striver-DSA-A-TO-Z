// Question link: https://www.naukri.com/code360/problems/reverse-number-triangle_6581889

void nNumberTriangle(int n) {
    // Write your code here.
    for(int i=n;i>0;i--){
        for(int j=1;j<=i;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}