#include<bits/stdc++.h>
using namespace std;

int selection_sort(int a[],int n){
	int i,j,min;
	for(i=0; i<=n-2; i++){
	
		int min=i;
		for(j=i; j<=n-1;j++){
		
			if(a[j]<a[min]){
				min=j;
			}
			
		}
		int temp= a[min];
		a[min]= a[i];
		a[i]=temp;
		
	}
}

int main(){
	int a[]={ 13,46,26,52,20,9},n=6,i,j;
selection_sort(a,n);
	cout<<"the sorted aarray is"<<endl;
	for(i=0; i<n; i++){
		cout<<a[i]<<" ";
	}
	return 0;
}
