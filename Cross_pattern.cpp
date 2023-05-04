#include<iostream>
using namespace std;
void print(int n){
	int i,count,j;
	for(i=1;i<=n;i++){
		count=i;
	  for(j=1;j<=n;j++){
	  	if(count==j||j==n-count+1){
	  		cout<<"*";
		  }
		else{
			cout<<" ";
		}
	  }
	  cout<<endl;
	}
}
int main(){
	int n;
	cout<<"ENter n: ";
	cin>>n;
	print(n);
	return 0;
}
/*

               *   *
                * *
                 *
                * *
               *   *
*/
