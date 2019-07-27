/*This program is used to print pattern as follows: 

*
**
***
****
*****
******
*****
****
***
**
*		*/

#include <iostream>
using namespace std;
int main(){
	int i,j,n;
	
	cin>>n;
	cout<<"The pattern is:\n";
	for(i=1;i<=n;i++){
		for(j=1;j<=i;j++){
			cout<<"*";
		}
		cout<<endl;
	}
	
	for(i=(n-1);i>=1;i--){
		for(j=1;j<=i;j++){
			cout<<"*";
		}
		cout<<endl;
	}
	return 0;
}
