#include <iostream>
using namespace std;
class Stack
{
	public:
	#define N 5
	int stack[N];
	int top = -1;
	
	void push(int x)
	{
		if (top == N-1)
		{
			cout << " No space left in the stack " << endl;
		}
		else 
		{
			top ++;
			stack[top] = x;
		}
	}
	
	void pop()
	{
		int element;
		if (top == -1)
		{
			cout << " Nothing to pop " << endl;
		}
		else 
		{
			element = stack[top];
			cout << " Value to be popped " << element  << endl;
			top --;
		}
	}
	
	void peek()
	{
		if (top == -1)
		{
			cout << " Nothing in the stack " << endl;
		}
		else
		{
			cout << " Top most value of the stack is " << stack[top] << endl;
		}
	}
	
	void display()
	{
		int i;
		for (i = top; i>= 0; i--)
		{
			cout << " Values in the stack " << stack[i] << ""<< endl;
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
