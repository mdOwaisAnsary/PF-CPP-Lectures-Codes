#include<iostream>

using namespace std;
	/*
		1 Declaration
		2 Ini
		3 Dec + Ini 
		4 Size DT
		5 Name identifier
		6 Value
	*/
	/*
		General Syntax Of Variable	
		Basic:
		a2+2ab+b2
		DT name = value;
		int koebhe= 123;
		
		Complete:
		AM KW DT name = value;
			
		AM = Access Modifiers  (Public, Privt , Protected).
		KW = Keyword (Static , virtual ,const etc) 
		DT= Data Type (int , long , float , char , boolean  ,void , class , object )
		[ = ] is assigment operator
		name = abc any name (Followed by Naming Convention) identifier
		
		#local #Gloabl
		constant
	  	of variables, the values stored in them need not be the same throughout its lifetime
	*/
	
int local = 100;
int main()
{	










	int varA; //Dec
	//int varA; //Dec
	varA = 123; // Ini
	
	int varB = 5; //Dec & Ini 
	
	//A Differnt Way To Dec and Ini of more than one variable
	int varC ,varD,varE;  //dec
	varC=varD=varE=10; //ini
	
	
	cout<<varA;
	int a=2; // dec + ini
	
	const int pi=3.15;
	
	
	//pi=5;
//	pi=3;
	///Constant is a read only variable
	
	 const int cnstVar = 1;
	 //DT name = value;
	 
	 //cnstVar=2;
	
	
	return 0;
}

int myFun()
{
	int test;//local
	cout<<varA; //can't be acces as it Local(scop till main funct)
	cout<<aGlobal;
	return 0;
}
