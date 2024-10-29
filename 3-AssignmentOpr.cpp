#include<iostream>

using namespace std;

int main()
{
	cout<<"Assignment :"<<endl;
		int x,y;
		x=5;
		y=2;
		cout<<"x is:"<<x<<endl;// 
		cout<<"y is:"<<y<<endl;//
	 
		cout<<"After:"<<endl;//
		x=x+y;//normal way
		x+=y;//Assignment
		cout<<"x is:"<<x<<endl;// 
		y=y+x;//normal way
		y+=x;//Assignment
		cout<<"y is:"<<y<<endl<<endl;//
		
		
		x=2;	
		cout<<(x+=2)<<endl;//
		cout<<(x-=2)<<endl;//
		cout<<(x*=2)<<endl;//
		cout<<(x/=2)<<endl;//
		cout<<(x%=2)<<endl<<endl;//
	}
