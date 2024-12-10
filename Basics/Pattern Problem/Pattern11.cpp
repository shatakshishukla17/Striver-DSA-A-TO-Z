// Question link: https://www.naukri.com/code360/problems/binary-number-triangle_6581890

void nBinaryTriangle(int n) {
    // Write your code here.
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            int sum=i+j;
            if(sum%2==0){
                cout<<"1 ";
            } else{
                cout<<"0 ";
            }
        }
        cout<<endl;
    }
}