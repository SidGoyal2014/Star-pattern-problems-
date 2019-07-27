
    *
   ***
  *****
 *******
*********

Pyramid Star Pattern
*/

#include <iostream>
using namespace std;
int main(){
	int i,k,n;
	cin>>n;
	for(i=1;i<=n;i++){
		for(k=n;k>=i;k--){
			cout<<" ";
		}
		for(k=1;k<=((2*(i-1))+1);k++){
			cout<<"*";
		}
		cout<<endl;
	}																	// 'i' is the number of lines
	return 0;                                                           // 'k' is used for blank spaces in Ist loop and  
}			
