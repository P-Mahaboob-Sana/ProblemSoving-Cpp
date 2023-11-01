#include<bits/stdc++.h>
using namespace std;
int bubble_sort(int a[],int n){
	int i,j,min,temp;
	for(i=0;i<n-1;i++){
		for(j=0;j<n-i-1;j++){
			if(a[j]>a[j+1]){
				swap(a[j],a[j+1]);
			}
		}
	}

}

int printArray(int a[],int n)
{
	for(int i=0;i<n ;i++){
		cout<<a[i]<<" ";
	}
}
int main(){
		int a[]={ 13,46,26,52,20,9},n=6,i,j;
bubble_sort(a,n);
	cout<<"the sorted array is"<<endl;
	
	printArray(a,n);
	
	return 0;
}
