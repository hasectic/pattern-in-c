#include <iostream>
using namespace std;
int main()
{
	int i,j,n;
	cin>>n;
	for(i=1; i<=n; i++){
		for(j=2*i-1;j<=2*n-1;j=j+2){
        cout<<j;
		}
		cout<<"\n";		
	}	


}
