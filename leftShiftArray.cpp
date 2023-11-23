#include<iostream>
using namespace std;

int leftShift(int a[], int n){
	int j,b[5];
	for(j=1; j<=n; j++){
		b[j-1]=a[j];
	}
	b[n-1]=a[0];
	cout<<"leftShifted array is"<<endl;
	for(j=0; j<n; j++){
		cout<<b[j]<< " ";
	}
	return b[j];
}

int main(){
	int a[5]={1,2,3,4,5},n,i,b[5];
	n=sizeof(a)/sizeof(a[0]);
	leftShift(a,n);
	
	return 0;
}
