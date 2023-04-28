//binary number triangle
#include<iostream>
using namespace std;
void diamond(int n){
  int i,j,k;
  for(i=1;i<=n;i++){
  	if(i%2==0){
  		k=0;
	  }
	  else{
	  	k=1;
	  }
  	for(j=1;j<=i;j++){
  		cout<<k<<" ";
  		if(k==1){
  			k=0;
		  }
		  else{
		  	k=1;
		  }
	  }
	  cout<<endl;
  }
}
int main(){
	int n;
	cout<<"Enter the number: ";
	cin>>n;
	diamond(n);
	return 0;
}
