#include<iostream>

using namespace std;

/*
	Conditional statements enable us to change the flow of the program. Based on a condition, a statement
	or a sequence of statements take alternative actions. 
	
		1)The if-else statement
			if
			if - else
			if - if else - else
			Nested
		2)The switch statement
		3)Ternarry	

	general syntax of if-else
		if(expression) condition -->True False
		{
			true Block
		}
		else if(expression)
		{
		}
		else
		{
 			false block
		}

*/

int main()
{
	/*
	// 1-if   S //
	int number;
    cout << "Enter an integer: ";
    cin >> number;
    // checks if the number is positive
    if (number > 0) {
        cout << "You entered a positive integer: " << number << endl;
    }
    cout << "This statement is always executed.";
    // 1-if   E //
	*/
	
	/*
	// 2-if-else  S //
	int number;

    cout << "Enter an integer: ";
    cin >> number;
    if (number >= 0) {
        cout << "You entered a positive integer: " << number << endl;
    }
    else {
        cout << "You entered a negative integer: " << number << endl;
    }
    cout << "This line is always printed.";
    // 2-if-else  E //
    */
    
    /*
    // 3-if-if else-else S //
    int number;

    cout << "Enter an integer: ";
    cin >> number;
    if (number > 0) {
        cout << "You entered a positive integer: " << number << endl;
    } 
	else if (number < 0) {
      cout << "You entered a negative integer: " << number << endl;
     } 
	else {
        cout << "You entered 0." << endl;
    }
     cout << "This line is always printed.";
     // 3-if-if else-else E //
     */
     
     /*
     // 4 Nested S //
     
	 int num;
    
    cout << "Enter an integer: ";  
     cin >> num;    

    // outer if condition
    if (num != 0) {
        
        // inner if condition
        if ((num % 2) == 0) {
            cout << "The number is even." << endl;
        }
         // inner else condition
        else {
            cout << "The number is odd." << endl;
        }  
    }
    // outer else condition
    else {
        cout << "The number is 0 and it is neither even nor odd." << endl;
    }
    cout << "This line is always printed." << endl;
    
    */

	string userName , pswd;
	
	cout<<"Enter User Name:";
	cin>>userName;
	
	
	if(userName=="admin" )
		cout<<"Login";
	else if(userName=="ADMIN")
		cout<<"Login";
	else
		cout<<"Wrong";	
	
	
	
	
	userName="root";
	pswd="123";
	
	if(userName=="admin" && pswd == "123")
		cout<<"Login"<<endl;
	else
		cout<<"Try Again"<<endl;
		
	////////////////////
	cout<<"Enter User Name:"<<endl;
		cin>>userName;
	cout<<"Enter Pswd:"<<endl;
		cin>>pswd;
		
	if(userName=="admin" && pswd=="123")
		cout<<"Login"<<endl;	
	else
		cout<<"Try Agin"<<endl;	
	
	
	/////////////	
		
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
		
	
	//0 age<1
	//100 above
	//1-2 infants
	//13 to 17 teenage
	//18 to 19 teenage adult
	//20 to 25 adukt
	//25 30 mature
	//31 40 married
	//41- 50 uncle
		
		
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
