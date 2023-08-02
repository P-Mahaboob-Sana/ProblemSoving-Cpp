#include<iostream>
using namespace std;

int main(){
	int num;
	int i,j;
	cout<<"enter a num"<<endl;
	cin>>num;
	
	for(i=0;i<=5;i++){
		for(j=1;j<=i;j++){
			cout<<num<<"";
		}
		cout<<endl;
	}
	
}
