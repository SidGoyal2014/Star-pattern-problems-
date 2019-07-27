/*This program is used to print pattern as follows: 

*
**
***
****
*****
******		*/

#include <iostream>
using namespace std;
int main(){
	int i,j,n;
	cout<<"Enter the number of lines: ";
	cin>>n;
	cout<<"The pattern is: \n";
	for(i=1;i<=n;i++){
		for(j=1;j<=i;j++){
			cout<<"*";
		}
		cout<<endl;
	}
	return 0;
} 
