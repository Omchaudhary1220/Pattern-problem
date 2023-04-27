#include<iostream>
using namespace std;
void diamond(int n){
	int i,j,k;
	for(i=1;i<n;i++){
		for(j=i;j<=n;j++)
		cout<<" ";
		for(k=1;k<=i;k++)
		cout<<"* ";
		cout<<endl;
	}
	for(i=n;i>=1;i--){
		for(j=i;j<n;j++)
		cout<<" ";
		for(k=1;k<=i;k++)
		cout<<"* ";
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
