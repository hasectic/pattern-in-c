#include <iostream>
using namespace std;
int main()
{
	int i,j,n;
	cin>>n;
	for(i=n; i>=1; i--){
		for(j=1;j<=2*i-1;j++){
        cout<<j;
		}
		cout<<"\n";		
	}	


}
