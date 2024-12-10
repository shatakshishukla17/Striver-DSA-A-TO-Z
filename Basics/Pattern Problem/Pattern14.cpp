// Question link: https://www.naukri.com/code360/problems/increasing-letter-triangle_6581897

void nLetterTriangle(int n) {
    // Write your code here.
    for(int i=1;i<=n;i++){
        for(char ch='A'; ch<'A'+i; ch++){
            cout<<ch<<" ";
        }
        cout<<endl;
    }
}