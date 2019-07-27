/*	This program is used to print pattern as follows:

******
*****
****
***
**
*		  */
#include <iostream>
using namespace std;
int main(){
	int i,j,n;
	cout<<"Enter number of lines: ";
	cin>>n;
	cout<<"The pattern is: \n";
	for(i=n;i>=1;i--){
		for(j=1;j<=i;j++){
			cout<<"*";
		}
		cout<<"\n";
	}
	return 0;
}
