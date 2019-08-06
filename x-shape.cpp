#include <iostream>
using namespace std;
main(){
	int n,i,j;
	cin>>n;
	for(i=1;i<=n;i++){
		for(j=1;j<i;j++){
			cout<<" ";
		}
		cout<<"*";
		for(j=(2*(n-i))-1;j>=1;j--){
			cout<<" ";
		}
		if(i!=n){
			cout<<"*";
		}
		else{															        //*         *
			cout<<" ";													    // *       * 
		}																          //  *     *
		cout<<endl;														    //   *   *
	}																	          //    * *
	for(i=2;i<=n;i++){													//     *
		for(j=(n-i);j>=1;j--){										//    * *
			cout<<" ";													    //   *   *
		}																          //  *     *
		cout<<"*";														    // *       *
		for(j=1;j<=((2*i)-3);j++){								//*         *
			cout<<" ";													//Star pattern problem
		}
		cout<<"*";
		cout<<endl;
	}
	return 0;
}
