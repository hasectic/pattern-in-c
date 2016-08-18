#include <iostream>
using namespace std;
int main()
{
	int i,j,n;
	cin>>n;
	for(i=1; i<=n; i++){
		int k=i;
		for(j=i;j<=n;j++){
        cout<<k;
        k++;
      }
		cout<<"\n";		
	}	


}
