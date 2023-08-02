#include<iostream>
using namespace std;

int main(){
	int num,count=0;
	
	cout<<"enter a number"<<endl;
	cin>>num;
	
	while(num!=0)
	{
		int n=num%10;
		num=num/10;
		
		if(n==5)
		{
			count++;
		}
	}
	cout<<count;
	
	return 0;
}
