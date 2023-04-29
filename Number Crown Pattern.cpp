//number crown
#include<iostream>
using namespace std;
void diamond(int n){
  int i,j,k,l;
  int space=(2*n)-2;
  for(i=1;i<=n;i++){
  	for(j=1;j<=i;j++)
  	cout<<j;
  	for(l=1;l<=space;l++)
  	cout<< " ";
  	for(k=i;k>=1;k--)
  	cout<<k;
  	cout<<endl;
  	space-=2;
  }
  
}
int main(){
	int n;
	cout<<"Enter the number: ";
	cin>>n;
	diamond(n);
	return 0;
}
