#include <iostream>
using namespace std;
int main(){															                                      //     *****
	int i,j,n;														                                      //    *****
	cin>>n;															                                        //   *****
	cout<<endl;														                                      //  *****
	for(i=1;i<n;i++){												                                    // *****
		for(j=i;j<=n;j++){											                                  // Star Pattern
			cout<<" ";
		}
		for(j=1;j<n;j++){
			cout<<"*";
		}
		cout<<endl;
	}
	return 0;
} 
