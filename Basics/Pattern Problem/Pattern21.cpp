// Question link: https://www.naukri.com/code360/problems/ninja-and-the-star-pattern-i_6581920

void getStarPattern(int n) {
    // Write your code here.
    // int m =n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i==1||j==1||i==n||j==n){
                cout<<"*";
            }else{
                cout<<" ";
            }
           
        }
         cout<<endl;
    }
}
