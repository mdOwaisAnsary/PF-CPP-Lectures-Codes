#include<iostream>

using namespace std;

int main()
{
	int age=0;
		
		cout<<"Enter Your Age:";
		cin>>age;
		
		if(age>=18 && age<=40)
			cout<<"adult"<<endl;
		else if(age<18)	
			cout<<"kid"<<endl;
		else if(age>=100)
			cout<<"You should Die !";
		else
			cout<<"Error !";

  return 0;
}
		
	
