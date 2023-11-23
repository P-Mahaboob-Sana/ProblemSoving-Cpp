#include<iostream>
using namespace std;

int main(){
	int a[5]={1,2,3,4,5},n=5,i,j,d,b[5];
    cout<<"enter the number upto which the array should be shifted"<<endl;
	cin>>d;
	i=d;
	//shifting before dth index	
	while(i<n)
      for(j=0; j<n; j++){
      	b[j]=a[i];
	  i++;
	}
	//shifting after dth index
	int m=0;
	for(i=n-d;i<n;i++){
		b[i] = a[m];
		m++;
	}
	cout<<"the shifted array is"<<endl;
	for(int k=0; k<n; k++){
		cout<<b[k]<<" ";
	}
}
