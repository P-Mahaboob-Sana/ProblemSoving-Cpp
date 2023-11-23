#include <iostream>
using namespace std;

int main(){
	int a[10],firstLargest,secondLargest=-1,n,i,j;
	cout<<"enter the size of array"<<endl;
	cin>>n;
	cout<<"enter the array"<<endl;
	for(i=0; i<n; i++){
		cin>>a[i];
	}
	//Brute approach
	for(i=0; i<n; i++){
		if(a[i]>firstLargest){
			firstLargest=a[i];
		}
	}
	for(i=0; i<n; i++){
		if(a[i]>secondLargest && a[i]<firstLargest){
			secondLargest=a[i];
		}
	}
	
	cout<<"the first largest element is" <<firstLargest<<endl;
		cout<<"the second largest element is" <<secondLargest<<endl;
}

//Better approach
int fLargest = 1, sLargest = -1;
for(i=0; i<n; i++){
	if(a[i]>fLargest){
		sLargest = fLargest;
		fLargest = a[i];
	}
}

cout<<"the first largest is "<<fLargest<<endl;
cout<<"the second largest is"<<sLargest<<endl;
return 0;
}
