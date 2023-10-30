#include<bits/stdc++.h>
using namespace std;

int removeDuplicate(int a[], int n){
	set<int> mySet;
	int i;
	
		for(i=0; i<n;i++){
			mySet.insert(a[i]);
		}
		int j=0;
	int k= mySet.size();
	for(int x:mySet){
	a[j++]=x;
	}
	return k;
}

int main(){
	int a[5]={1,2,3,1,4,3},n,i;
	int n= sizeof(a)/sizeof(a[0]);
	removeDuplicate(a,n);
	cout<<"array after removing duplicates is"<<endl;
	for(i=0; i<k;i++){
		cout<<a[i]<<" ";
	}
	return 0;
}
