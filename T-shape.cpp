#include <iostream>
using namespace std;
int main(){
  
  int n,i,j;
  cin>>n;

  for(i=1;i<=n;i++){   
    for(j=1;j<=(3*n);j++){
      cout<<"*";
    }
    cout<<endl;											//***
  }														      // *
  														      // *
  for(i=1;i<=(2*n);i++){
    for(j=1;j<=n;j++){
      cout<<" "; 
    }
    
    for(j=1;j<=n;j++){
      cout<<"*";
    }
    cout<<endl;
  }
  
  return 0;
}
