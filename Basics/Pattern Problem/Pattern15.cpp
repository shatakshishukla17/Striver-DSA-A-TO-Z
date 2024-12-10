// Question link: https://www.naukri.com/code360/problems/reverse-letter-triangle_6581906

void nLetterTriangle(int n) {
    // Write your code here.
    for(int i=n;i>=1;i--){
        for(char ch='A'; ch<'A'+i; ch++){
            cout<<ch<<" ";
        }
        cout<<endl;
    }
}