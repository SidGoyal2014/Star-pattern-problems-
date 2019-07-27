#include <iostream>
using namespace std;
int main(){
	int n,i,j;
	cout<<"Enter the number of lines: ";
	cin>>n;								
	cout<<"The pattern is:\n";								                                                   //     *
	for(i=1;i<=n;i++){													                                                 //     *
		if(i!=(n/2)){													                                                     //     *
			for(j=1;j<=5;j++){											                                                 //     *
				cout<<" ";												                                                     //*************
			}															                                                           //     *	
			cout<<"*";													                                                     //     *
		}																                                                           //     *
		else{															                                                         //     *
			for(j=1;j<12;j++){
				cout<<"*";
			}
		}
		cout<<endl;
	}
	return 0;
}
