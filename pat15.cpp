#include <iostream>
using namespace std;
int main()
{
	int i,j,n,k;
	cin>>n;
	for(i=1; i<=n; i++){
		if(i%2==0)
			k=2;
		else
			k=1;
		for(j=1;j<=i;j++){
        cout<<k<<" ";
        k+=2;
		}
		cout<<"\n";		
	}	


}
