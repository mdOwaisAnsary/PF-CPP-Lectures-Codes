#include<iostream>

using namespace std;
/*
		Operators are symbols that perform operations on variables and values. 
		For example, + is an operator used for addition, 
		while - is an operator used for subtraction.
			
			#Operators are always used with Operands
			
			Left and Right of Operator is call OPERANDS
			
				a=6
			[a]left operands [=]operator [6]right operands
			
				2+5
			[2]left operands [+]operator [5]right operands
			
				2<=4
			[1]left operands [<=]operator [5=4]right operands

		Operators in C++ can be classified into 6 types:
			1-Arithmetic Operators
				i)Increment Decrement
				Post and Pre 
			2-Assignment Operators
			3-Relational Operators
			4-Logical Operators
			5-Bitwise Operators
			6-Other Operators
				i)Unary
				ii)Binary
				iii)Ternary	
				iv)ShortHand 
				v)Concatenation 
		
		1-Arthemetic [+ , - , / , * , %] %Mode Reminder
				i)Increment Decrement [++ , --]
				Post [a++ , a--] and Pre [++a , --a]
		2-Assigment [= , += , -= , /= , *= ,  %= ]
		3-Relation [== , != ,=== , < , > , <= , >= ] always return in boolean means True or False
		4-Logical [and && , or || , Not !] always return in boolean means True or False
		5-Bitwise Operators [& , | , << , >> ]
		6-Other Operators
				i)Unary [- , + , -- , ++ , ! , ~ ,&]
				ii)Binary [Arth , Rel , && , || , << , >> ]
				ii)Ternary [Operand1?Operand2:Operand3]
				iv)ShortHand [++ , -- , += , -= , /= , *= , %=]
				v)Concatenation [<<]
				[& , . , -> ,]

		 
		Statment:[Execute]
			cout<<"Hello";
			Note:statment canot be part of expression
			
		Expression: [evaluate]
		 	a=5;
		 	2+5-8
		 	Note:Expression can be part of statment.
		 	cout<<2+2;
*/
int main()
{
	
	printf("%s","Hello");
	scanf("%d",&a);
	
	cout<<"\nHello\n";
	cin>>&a;
	
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
		int a=2; //M2
		cout<<a<<endl;// P2 M2
		cout<<++a<<endl;//M3 P3 M3
		cout<<a++<<endl;//P3 M4
		cout<<a<<endl;//P4 M4
		cout<<a++<<endl;//P4 M5
		cout<<++a<<endl<<endl;//M6 P6
		int b=1;
		cout<<--b<<endl;//0
		cout<<++b<<endl;//1
		cout<<b--<<endl;//1 M0
		cout<<b<<endl;//P0
		
		
	cout<<"Assignment :"<<endl;
		int x,y;
		x=5;
		y=2;
		cout<<"x is:"<<x<<endl;// 
		cout<<"y is:"<<y<<endl;//
	 
		cout<<"After:"<<endl;//
		x=x+y;
		x+=y;
		cout<<"x is:"<<x<<endl;// 
		y=y+x;
		y+=x;
		cout<<"y is:"<<y<<endl<<endl;//
		
		
		x=2;	
		cout<<(x+=2)<<endl;//
		cout<<(x-=2)<<endl;//
		cout<<(x*=2)<<endl;//
		cout<<(x/=2)<<endl;//
		cout<<(x%=2)<<endl<<endl;//	
	
		

	//Relation boolean
	cout<<"Relation:"<<endl;
		cout<<(2==2)<<endl;//
		cout<<(2==3)<<endl;//
		cout<<(2!=2)<<endl;//
		cout<<(2!=1)<<endl;//
		
		cout<<(2>2)<<endl;//0
		cout<<(1>2)<<endl;//0
		cout<<(2>1)<<endl;//1
		
		cout<<(2<2)<<endl;//0
		cout<<(1<2)<<endl;//1
		cout<<(2<1)<<endl;//0
		
		cout<<(2<=2)<<endl;//1
		cout<<(5<=2)<<endl;//0
		cout<<(2>=2)<<endl;//1
		cout<<(5>=2)<<endl;//1
		
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
		
			//Logical 
	cout<<"Logical:"<<endl;
		cout<<"AND"<<endl;//
		cout<<( 1&&1 )<<endl;//
		cout<<( 0&&1 )<<endl;//
		cout<<( 1&&0 )<<endl;//
		cout<<( 0&&0 )<<endl;//
	
		cout<<"OR"<<endl;//
		cout<<( 1||1 )<<endl;//
		cout<<( 0||1 )<<endl;//
		cout<<( 1||0 )<<endl;//
		cout<<( 0||0 )<<endl;//
		
		cout<<"NOT"<<endl;//
		cout<<( !1 )<<endl;//
		cout<<( !0 )<<endl;//
		
	//BitWise Logical	
	cout<<"Bit Wise Logical:"<<endl;
		cout<<"AND"<<endl;//
		cout<<( 25&12 )<<endl;//
		cout<<( 15&5 )<<endl;//
		//cout<<( 90&15 )<<endl;//
		//cout<<( 128&64 )<<endl;//

		cout<<"OR"<<endl;//
		//cout<<( 25|12 )<<endl;//
		//cout<<( 15|5 )<<endl;//
		//cout<<( 90|15 )<<endl;//
		//cout<<( 'a'|'A' )<<endl;//
		
		cout<<"XOR"<<endl;//
		cout<<( 25^12 )<<endl;//
		cout<<( 15^5 )<<endl;//
		cout<<( 90^15 )<<endl;//
		cout<<( 'a'^'A' )<<endl;//
		
		cout<<"Shift >>"<<endl;//
		cout<<( 8>>1 )<<endl;//
		cout<<( 128>>2 )<<endl;//
		cout<<( 32<<3 )<<endl;//
		cout<<( 2>>3 )<<endl;//
		
		cout<<"Shift <<"<<endl;//
		cout<<( 12<<2 )<<endl;//
		cout<<( 128<<2 )<<endl;//
		cout<<( 32<<3 )<<endl;//
		cout<<( 2<<3 )<<endl;//
		
		cout<<"~Complement"<<endl;//
		cout<<( ~12 )<<endl;//
		cout<<( ~5 )<<endl;//
		cout<<( ~15 )<<endl;//
		cout<<( ~'A' )<<endl;//
		
		
		if()
			printf()	
		
				
		

	return 0;
}
