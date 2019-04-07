//Kevin Youngerman
//Lab 5

//This is the header file for the Node class, and the myStack class

#ifndef LAB5MYSTACK_H
#define LAB5MYSTACK_H
#include <string>
using namespace std;

	string stringReversal1(string input);		//stack
	string stringReversal2(string input);		//vector
	string stringReversal3(string input);		//list
	string stringReversal4(string input);		//myStack

	class Node		//this class only serves as framework for myStack
	{
	public:
		int data;
		Node* next;
		Node(char);
		Node(char, Node*);
	};

	class myStack
	{
	private:
		Node* top;
	public:
		myStack();					//constructor
		bool isEmpty() const;		//checks if stack is empty
		void push(char& c);			//puts the character on the top of the stack
		char pull();				//removes and returns the top
	};

#endif

