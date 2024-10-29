/*
		There are two types of type conversion in C++.
			1) Implicit Conversion
			2) Explicit Conversion (also known as Type Casting)

		##Implicit Conversion##
			The type conversion that is done automatically done by the 
			compiler is known as implicit type conversion. 
			This type of conversion is also known as 
			automatic conversion or Direct Conversion.
			
		##Explicit Conversion##	
			When the user manually changes data from one type to another,
			this is known as explicit conversion. 
			This type of conversion is also known as type casting.
					There are three major ways in which we can use explicit conversion in C++. 
					They are:	
						C-style type casting (also known as cast notation)
						Function notation (also known as old C++ style type casting)
						Type conversion operators


*/

#include<iostream>
#include <typeinfo>

using namespace std;

int main()
{
	char c='a';
	short s=12;
	int i=128;
	long l=1258;
	float f=2.5;
	double d=2.56;
	long double ld = 2.55555;
	//Low to High
	s=c;
	i=s;
	l=i;
	f=l;
	d=f;
	ld=d;
	
	//High To Low
	d=ld;
	f=d;
	l=f;
	i=l;
	s=i;
	c=s;
	
	int numInt;
	double numDouble=25.56;

	//Type Casting
	//distination = (targetDT) source;
	numInt = (int)numDouble;
	numInt=int(numDouble);
	cout<<numInt<<endl;
	
	
	
	
}
