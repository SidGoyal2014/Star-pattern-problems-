#include <iostream>
using namespace std;
int main(){
	int i,j,n;
	cin>>n;																			                    //	    *
   	for(i=1;i<=n;i++){																            //	   ***	
		for(j=1;j<60;j++){										                        //	  *****
			cout<<" ";													                        //	 *******
		}																			                        //	*********
		for(j=n;j>=i;j--){															              //	 *******
			cout<<" ";																                  //	  *****
		}																			                        //	   ***
		for(j=1;j<=(2*(i-1)+1);j++){												          //		  *
			cout<<"*";																                  //	Diamond Star Pattern
		}
		cout<<endl;
	}																				
	for(i=(n-1);i>=1;i--){
		for(j=1;j<60;j++){
			cout<<" ";
		}
		for(j=i;j<=n;j++){
			cout<<" ";
		}
		for(j=(2*(i-1)+1);j>=1;j--){
			cout<<"*";
		}
		cout<<endl;
	}
	return 0;
}
