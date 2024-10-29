#include<iostream>

using namespace std;

int main()
{
	cout<<"Basic :"<<endl;
		cout<<2+2<<endl;//4
		cout<<2-2<<endl;//0
		cout<<2/2<<endl;//1
		cout<<2*2<<endl;//4
		cout<<2%2<<endl;//0
	
	cout<<"DMAS :"<<endl;
		cout<<2+2/2<<endl;//3
		cout<<2+2*2<<endl;//6
		cout<<2*2/2<<endl;//2
	
	cout<<"BODMAS :"<<endl;
		cout<<2+2-(5*2)<<endl;// -6 
		cout<<2/2-(5*2)<<endl;//-9
	
		
	cout<<"Increment Decrement:"<<endl;
		int a=2; //
		cout<<a<<endl;//
		cout<<++a<<endl;//
		cout<<a++<<endl;//
		cout<<a<<endl;//
		cout<<a++<<endl;//
		cout<<++a<<endl<<endl;//
}
