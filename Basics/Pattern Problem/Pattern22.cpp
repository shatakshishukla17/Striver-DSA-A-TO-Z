// Question link: https://www.naukri.com/code360/problems/ninja-and-the-number-pattern-i_6581959

void getNumberPattern(int n) {
    // Write your code here.
    for(int i=1;i<=2*n-1;i++){
      for(int j=1;j<=2*n-1;j++){
        int minval;
        if(i<j){
          minval=i;
        }else{
          minval=j;
        }
        if(minval>2*n-i){
          minval=2*n-i;
        }
        if(minval>2*n-j){
          minval=2*n-j;
        }

        cout<<n-minval+1;
        
      }
      cout<<endl;
    }
}


