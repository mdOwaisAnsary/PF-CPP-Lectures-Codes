
/*
	Conditional statements enable us to change the flow of the 
	program.
	Based on a condition, a statement
	or a sequence of statements take alternative actions. 
	
		1)The if-else statement
			if
			if - else
			if - if else - else
			Nested
		2)The switch case statement
			Nested
		3)Ternarry
			Nested	
() [] {}
	general syntax of if
	
		if(expression) condition -->True False
		{
			true Block
		}
		else if()
		{
		//
		
		}
		else{
		//false block
		}


*/
#include<iostream>

using namespace std;


int main()
{
	
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
     
     
     // 4 Nested S //
     
	 int num;
    
    cout << "Enter an integer: ";  
     cin >> num;    

    // outer if condition
    if (num != 0) {
        
        // inner if condition
        if (num % 2 == 0) {
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
    	
	return 0;
	
}
