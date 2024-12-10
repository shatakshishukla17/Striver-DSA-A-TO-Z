// Question link: https://www.naukri.com/code360/problems/star-triangle_6573671

void nStarTriangle(int n) {
    int k=0;
    for(int i=1 ; i<=n ; ++i, k=0){
        for(int j=1; j<=n-i;++j){
            cout<<" ";
        }
        while(k!=2*i-1){
            cout<<"*";
            ++k;
        }
        cout<<endl;

    }
}



