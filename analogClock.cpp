//find minimum angle between hour hand and minutes hand for a time as input

#include<iostream>
using namespace std;

int main(){
	int  t,hr,min;
	float deg,minHamd=1.5;
	int hrHand=30;
	
	cout<<"enter test cases"<<endl;
	cin>>t;
	
	cout<<"enter current time "<<endl;
	cin>>hr>>min ;
	
	while(t>0){
		if(min==0){
			deg=30*hr;
		}
		else{
			deg=0.5*min;
		}
		t--;
	}
	cout<<(deg);
	
	return 0;
}
