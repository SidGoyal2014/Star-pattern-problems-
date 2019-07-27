#include <iostream>
using namespace std;
int main(){
	int n,i,j;
	cout<<"Enter number of lines: ";
	cin>>n;			// Enter number of lines
	cout<<"The pattern is:\n";											                                                //*
	for(i=1;i<=n;i++){													                                                    //**
		if((i==1)||(i==n)){												                                                    //* *
			for(j=1;j<=i;j++){											                                                    //*  *
				cout<<"*";												                                                        //*   *
			}															                                                              //******
		}																                                                              // Star Pattern
		else{															                                                            // 'i' is used for rows
			for(j=1;j<=i;j++){											                                                    // 'j' is used for columns
				if((j==1)||(j==i)){
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
