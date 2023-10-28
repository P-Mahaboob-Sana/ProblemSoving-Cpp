#include <iostream>
using namespace std;

int main(){
	int i,j,n=5;
	int space=2* (n-1);
	for(i=1;i<=n;i++){
		//numbers
		for(j=1;j<=i;j++){
			cout<<j;
		}
		//spaces
		for(j=1;j<=space;j++){
			cout<<" ";
		}
		//numbers
			for(j=i;j>=1;j--){
			cout<<j;
		}
		cout<<endl;
		space-=2;
	}
	return 0;
}
