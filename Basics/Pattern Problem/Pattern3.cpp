// Question link: https://www.naukri.com/code360/problems/n-triangles_6573689

void nTriangle(int n) {
	// Write your code here
	for(int i=1;i<=n;i++){
		for(int j=1;j<=i;j++){
			cout<<j<<" ";
		}
		cout<<endl;
	}
}