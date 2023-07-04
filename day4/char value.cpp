#include <bits/stdc++.h>
  using namespace std;
  
  int main()
  {
    //write your code here
    string s;
    cin>>s;
    if(s=="P"|| s=="p"){
      cout<<"PrepBytes"<<endl;
    }
    else if(s=="Z"||s=="z"){
      cout<<"Zenith"<<endl;
    }
    else if(s=="E"||s=="e"){
      cout<<"Expert Coder"<<endl;
    }
    else if(s=="D"||s=="d"){
      cout<<"Data Structure"<<endl;
    }
    else{
      cout<<"incorrect string"<<endl;
    }
    
    return 0;
  }
