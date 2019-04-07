//Kevin Youngerman
//Lab 5

//This is the Source file that has all 4 string revarsal functions, the functions for the Node class, and the functions for the myStack class

#include "myStack.h"
#include <iostream>
#include <stack>
#include <vector>
#include <list>

// --------String Reversal Functions------------ //
string stringReversal1(string input) //String reversal using a stack
{
	stack<char> stk;
	for (unsigned int i = 0; i < input.size(); i++)
	{
		stk.push(input[i]);
	}

	for (unsigned int i = 0; i < input.size(); i++)
	{
		input[i] = stk.top();
		stk.pop();
	}
	return input;
}

string stringReversal2(string input) //string reversal using a vector
{
	vector<char> vec;
	for (unsigned int i = 0; i < input.size(); i++)
	{
		vec.push_back(input[i]);
	}

	for (unsigned int i = 0; i < input.size(); i++)
	{
		input[i] = vec.back();
		vec.pop_back();
	}
	return input;
}

string stringReversal3(string input) //string reversal using a list
{
	list<char> lis;
	for (unsigned int i = 0; i < input.size(); i++)
	{
		lis.push_back(input[i]);
	}

	for (unsigned int i = 0; i < input.size(); i++)
	{
		input[i] = lis.back();
		lis.pop_back();
	}
	return input;
}

string stringReversal4(string input) //string revarsal using myStack (custom stack class)
{
	myStack stk = myStack();

	for (unsigned int i = 0; i < input.size(); i++)
	{
		stk.push(input[i]);
	}

	for (unsigned int i = 0; i < input.size(); i++)
	{
		input[i] = stk.pull();
	}
	return input;
}

// --------Node class Functions------------ //
Node::Node(char d)
{
	data = d;
	next = NULL;
}

Node::Node(char d, Node* newNext)
{
	data = d;
	next = newNext;
}



// ------- myStack Functions------------ //

myStack::myStack()
{
	top = NULL;
}

bool myStack::isEmpty() const
{
	return top == NULL;
}

void myStack::push(char & c)
{
	Node* N = new Node(c);		//shouldnt need to check if top is null. If it is,
	N->next = top;				//then top = N and top->next = NULL
	top = N;
}

char myStack::pull()
{
	if (!isEmpty())				// cant pull something from the stack if its empty
	{
		char topData = top->data;
		top = top->next;
		return topData;
	}
	else
	{
		cout << "stack is empty";
		return NULL;
	}
}