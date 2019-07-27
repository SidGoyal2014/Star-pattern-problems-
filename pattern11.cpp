#include <iostream>
using namespace std;
int main(){
	int n,i,j;															                                      //    *****														
	cin>>n;																                                        //   *   *
	for(i=1;i<=n;i++){													                                  //  *   *
		for(j=i;j<n;j++){												                                    // *   *
			cout<<" ";													                                      //*****
		}																                                            // Star pattern
		if((i==1)||(i==n)){												                                  // 'i' is for rows
			for(j=1;j<=n;j++){											                                  // 'j' is for columns
				cout<<"*";
			}
		}
		else{
			for(j=1;j<=n;j++){
				if((j==1)||(j==n)){
					cout<<"*";
				}
				else{
					cout<<" ";
				}
			}
		}
		cout<<endl;
	}
	return 0;
}
