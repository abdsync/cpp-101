#include <iostream>
using namespace std;
class Node 
{
	public:
	int data;
	Node * next;
};
class Stack
{
	public:
	Node * top = NULL;
	
	void push(int x)
	{
		Node * temp = new Node();
		temp->data = x;
		temp->next = top;
		top = temp;
	}
	
	void pop()
	{
		Node * p = top;
		if (top == NULL)
		{
			cout << " Stack is empty " << endl;
		}
		else 
		{
			cout << " Value being poped " << top->data << endl;
			top = top->next;
			delete p;
		}
	}
	
	void peek()
	{
		cout << " Top most value of the stack is " << top->data << endl;
	}
	
	void display()
	{
		Node * p = top;
		while (p !=0)
		{
			cout << " Data is " << p->data << endl;
			p = p->next;
		}
	}
};
int main()
{
	Stack s;
	s.push(10);
	s.push(20);
	s.push(30);
	s.push(40);
	s.push(50);
	s.pop();
	s.peek();
	s.display();
	return 0;
}