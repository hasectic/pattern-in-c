#include <iostream>
using namespace std;
int main()
{
	int i,j,n;
	cin>>n;
	for(i=n; i>=1; i--){
		int k=n;
		for(j=i;j>=1;j--){
        cout<<k;
        k--;
    }
		cout<<"\n";		
	}	


}
