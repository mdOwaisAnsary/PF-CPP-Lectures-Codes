#include<iostream>

using namespace std;

int main()
{
//Relation 
	cout<<"Relation:"<<endl;
		cout<<(2==2)<<endl;//
		cout<<(2==3)<<endl;//
		cout<<(2!=2)<<endl;//
		cout<<(2!=1)<<endl;//
		
		cout<<(2>2)<<endl;//
		cout<<(1>2)<<endl;//
		cout<<(2>1)<<endl;//
		
		cout<<(2<2)<<endl;//
		cout<<(1<2)<<endl;//
		cout<<(2<1)<<endl;//
		
		cout<<(2<=2)<<endl;//
		cout<<(5<=2)<<endl;//
		cout<<(2>=2)<<endl;//
		cout<<(5>=2)<<endl;//
		
		int intTest = 2>3;//
		cout<<intTest<<endl;
		
		bool test=2>3;
		test=2==2;//
		test=2==3;//
		test=1!=2;//
		test=2==3;//
		//test=2==2;//
		//test=2==='2';//
		test=2<3;//
		cout<<test<<endl;//
}
