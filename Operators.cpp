#include<iostream>

using namespace std;
/*
		
		Arthemetic (+ , - , / , * , %) Mode Reminder
		Incre/Dec  then Post and Pre and Uniary
		Assigment( = ) but also (+= , -= , /= , *= , %=)
		Relation (== , != ,=== , < , > , <= , >= ) always return in boolean means True or False
		Logical (and && , or || , Not !)
		
		
		a =2;
		a= a+2; //add 2 in a var now save in a
		a=4
		
		a+=2;
		
		Uniary ++2 , 2++ , 2-- , --2 , !
		Binary -,+/,* = < ,> <= =
		Teranrry (Conditional)
		
		ShortHand (+= , -= , /= , *= , %=) , (-- , ++)
		Concatenation/addition 2+2= 4 '2' + '2' = 22
		String 
		
		operators are always used with Operands
		
		left operands operator right operands
		2+2
		
		Operator and Operands
		++2
		2-2
		Oprnd1?Oprnd2:Opernd3
		 
		 Statment ---> execute cout<<"Hello"; HEllo
		 cout<<2+2;
		 	expression can be part of statment .
		 Expression ---> evaulyauate Solve out 2+2-3
		 	statment canot be part of expression
		 
		 2+3+7;
		 



*/
int main()
{
	//cout<<2+2-(5*2)<endl;// BODMAS
	//cout<<2+2-(5*2)<endl;
	int a=2; //M2 //express
	cout<<a;//2//statment
	cout<<++a;//m3 c3			//pre
	cout<<a++;//c3 	m4	//post
	cout<<a;//4
	cout<<a++;//Print 4 Memory 5
	cout<<++a;//print 6 memory 6
	
	int b=1;
	cout<<--b;//memory 0 print 0
	cout<<++b;//emory 1 print 1
	cout<<b--;//Print 1  Memory 0
	cout<<b;//print0	
	//cout<<"str"<<62<<endl;
	

	
	//Relation 
	
	int intTest = 2>3;//0
	bool test=2>3;
	test=2==2;//1
	test=2==2;//1
	test=1!=2;//1
	test=2==3;//0
//	test=2===2;//1
//	test=2==='2';//0
	test=2<3;//1
	//0r  01
	test=2<=3;//1
	test=2<=1;//00 //
	test=3>=3;//1
	test=4>=6;//0
	cout<<test;
	return 0;
}
