#include<iostream>

using namespace std;

void table(){
	
	int t,l,r;
	cout<<"Enter Table No:"<<endl;
	cin>>t;
	cout<<"Enter Table Length:"<<endl;
	cin>>l;
	for(int i=1;i<=l;i++)
	{
		r=i*t;
		cout<<t<<"x"<<i<<"="<<r<<endl;
	}
		
	}



main()
{
	
	table();
	return 0;
	
	
}

