#include <iostream>
using namespace std;
int main(){
	int n,i,j;
	cin>>n;																			                              //	***** *****
   	for(i=1;i<=n;i++){																                      //	****   ****		
		for(j=1;j<60;j++){															                        //	***     ***
			cout<<" ";																                            //	**       **
		}																			                                  //	*         *
		for(j=n;j>=i;j--){															                        //	**       **
			cout<<"*";																                            //	***     ***
		}																			                                  //	****   ****
		for(j=1;j<=(2*(i-1)+1);j++){												                    //	***** *****
			cout<<" ";																                            // Star Pattern
		}
		for(j=n;j>=i;j--){															
			cout<<"*";																
		}			
		cout<<endl;
	}																				
	for(i=(n-1);i>=1;i--){
		for(j=1;j<60;j++){
			cout<<" ";
		}
		for(j=i;j<=n;j++){
			cout<<"*";
		}
		for(j=(2*(i-1)+1);j>=1;j--){
			cout<<" ";
		}
		for(j=n;j>=i;j--){															
			cout<<"*";																
		}			
		cout<<endl;
	}
	return 0;
}
