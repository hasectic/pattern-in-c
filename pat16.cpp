#include <iostream>
using namespace std;
int main()
{
	int i,j,n,k;
	cin>>n;
	for(i=1; i<=n; i++){
		for(j=1;j<=n;j++){
		if(n-i+j>=n)
		 k=n;
		 else
		 k=n-i+j;
        cout<<k;
		}
		cout<<"\n";		
	}	


}
