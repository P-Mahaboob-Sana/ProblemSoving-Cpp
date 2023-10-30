#include<iostream>
using namespace std;

int rotateArray(int a[], int n){
	int k=2,i,temp[7];
	for(i=n-1;i>=k;i--){
	temp[i++]=a[i];	
	}
	for(i=2;i<n;i++){
		temp[i]=a[i];
	}

	for(i=0;i<n;i++){
		temp[i]=a[i];
}
cout<<"rotated array is"<<endl;
	for(i=0;i<n;i++){
	cout<<temp[i]<<" ";
}
	return temp[i];
	
}

int main(){
	int a[7]={1,2,3,4,5,6,7},n,i,b[5];
	n=sizeof(a)/sizeof(a[0]);
rotateArray(a,n);
	
	return 0;
}
