#include<iostream>

using namespace std;

int main()
{
	string userName , pswd;
	 userName="root";
	  pswd="123";
	
	if(userName=="admin")
		if(pswd == "123")
			cout<<"Login"<<endl;
		else
			cout<<"Invalid Password"<<endl;		
	else
		cout<<"Plz Sign UP"<<endl;

			
	
		
	
	
	
	
	
	
	////////////////////////////////////	
	
	cout<<"Enter User Name:";
	cin>>userName;
	
	
	if(userName=="admin" )
		cout<<"Login";
	else if(userName=="ADMIN")
		cout<<"Login";
	else
		cout<<"Wrong";	
	
	////////////////////////////////////
	
	cout<<"Enter User Name:"<<endl;
		cin>>userName;
	cout<<"Enter Pswd:"<<endl;
		cin>>pswd;
		
	if(userName=="admin" && pswd=="123")
		cout<<"Login"<<endl;	
	else
		cout<<"Try Agin"<<endl;	
	
	////////////////////////////////////	
	
		cout<<"Enter User Name:";
		cin>>userName;
		
	if(userName=="admin")
	{
		cout<<"Enter Pswd:";
		cin>>pswd;
		if(pswd=="123")
		{
			cout<<"Login:"<<endl;
		}
		else{
			cout<<"Wrong Pswd !"<<endl;	
		}	
	}	
	else
		cout<<"User Name Not Exist"<<endl;		
}
