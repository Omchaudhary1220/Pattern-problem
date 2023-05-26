#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"Enter the number:";
	cin>>n;
	int i,j,k,p=-1;
	for(i=1;i<=n;i++){
	  p++;
	  for(k=i;k<n;k++){
	  	cout<<" ";
	  }
	  for(j=1;j<=(i+p);j++){
	  	cout<<"*";
	  }
	  cout<<endl;
	}
	return 0;
}
