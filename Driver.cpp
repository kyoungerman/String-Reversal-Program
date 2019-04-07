//Kevin Youngerman
//Lab 5

//This is the UI driver/test for the program. The user inputs a string four times, and it is reversed four times using a different method each time.

#include <iostream>
#include "myStack.h"

int main()
{
	// --------stringReversal1 test------------ //
	string input;
	cout << "input (stack): " << endl;		
	cin >> input;

	input = stringReversal1(input);

	cout << "reversed input (stack): " << input << endl;

	// --------stringReversal2 test------------ //
	string input2;
	cout << "input (vector): " << endl;
	cin >> input2;

	input2 = stringReversal2(input2);

	cout << "reversed input (vector): " << input2 << endl;

	// --------stringReversal3 test------------ //
	string input3;
	cout << "input (list): " << endl;
	cin >> input3;

	input3 = stringReversal3(input3);

	cout << "reversed input (list): " << input3 << endl;

	// --------stringReversal4 test------------ //
	string input4;
	cout << "input (myStack): " << endl;
	cin >> input4;

	input4 = stringReversal4(input4);

	cout << "reversed input (myStack): " << input4 << endl;
	system("pause");
}
