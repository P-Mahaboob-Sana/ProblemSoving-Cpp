	#include<bits/stdc++.h>
using namespace std;
int insertion_sort(int a[],int n){
	int i,j;
	for(i=0;i<n;i++){
		for(j=i;j<n;j++){
			if(a[i]>a[j]){
				swap(a[i],a[j]);
			}
		}
	}

}
int print(int a[], int n){
	int i;
	for(i=0; i<n;i++){
		cout<<a[i]<<" ";
	}
}

	
	int main(){
			int a[]={ 13,46,26,52,20,9},n=6,i,j;
insertion_sort(a,n);
	cout<<"the sorted aarray is"<<endl;
	for(i=0; i<n; i++){
		cout<<a[i]<<" ";
	}
	return 0;
	}

