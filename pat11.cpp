#include <iostream>
using namespace std;
int main()
{
	int i,j,n;
	cin>>n;
	for(i=n; i>=1; i--){
		if(i%2==0){
				for(j=i;j>=1;j--){
				cout<<j;
			   }
		}
		else{
			for(j=1;j<=i;j++){
				cout<<j;
			   }
			}
		cout<<"\n";		
	}	


}
