//program to print a pair Berth no. in a train compartment

#include<iostream>
using namespace std;

int main()
{
	int berthNo;
	cout<<"Enter your Berth No:"<<endl;
	cin>>berthNo;
	
	switch(berthNo){
		case 1:
			cout<<"Your pair berth is "<<berthNo+3<<"LB"<<endl;
			break;
	
	case 2:
			cout<<"Your pair berth is "<<berthNo+3<<"MB"<<endl;
			break;
			
			case 3:
			cout<<"Your pair berth is "<<berthNo+3<<"UB"<<endl;
			break;
			
			case 4:
			cout<<"Your pair berth is "<<berthNo-3<<"LB"<<endl;
			break;
			
			case 5:
			cout<<"Your pair berth is "<<berthNo-3<<"MB"<<endl;
			break;
			
		case 6:
			cout<<"Your pair berth is "<<berthNo-3<<"UB"<<endl;
			break;
			case 7:
			cout<<"Your pair berth is "<<berthNo+1<<"SU"<<endl;
			break;
			case 8:
			cout<<"Your pair berth is "<<berthNo-1<<"SL"<<endl;
			break;
			
			default:
				cout<<"invalid berth no"<<endl;
		}
		return 0;
}
