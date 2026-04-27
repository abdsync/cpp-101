#include <iostream>
using namespace std;
class Node
{
	public:
	int data;
	Node * next;
};
class Queue
{
	public:
		Node *  front = NULL;
		Node *  rear = NULL;
	
	void enqueue(int x)
	{
		Node * temp = new Node();
		temp->data = x;
		temp->next = NULL;
		if (front == NULL && rear == NULL)
		{
			front = rear = temp;
		}
		else 
		{
			rear->next = temp;
			rear = temp;
		}
	}
	
	void dequeue()
	{
		if (front == NULL)
		{
			cout << " Empty  " << endl;
		}
		else 
		{
			Node * p = front;
			cout << " The element being dequeued is " << p->data << endl;
			front = front->next;
			delete p;
		}
	}
	
	void peek()
	{
		if (front == NULL && rear == NULL)
		{
			cout << " Queue is empty " << endl;
		}
		else
		{
			cout << " The first element is " << front->data << endl;
		}
	}
	
	void display()
	{
		Node * p = front;
		if (front == NULL && rear == NULL)
		{
			cout << " Queue is empty " << endl;
		}
		else
		{
			while (p!=NULL)
			{
				cout << " Data in the list is " << p->data << " " << endl;
				p = p->next;
			}
		}
	}
};
int main()
{
	Queue q;
	q.enqueue(10);
	q.enqueue(20);
	q.enqueue(30);
	q.enqueue(40);
	q.enqueue(50);
	q.dequeue();
	q.peek();
	q.display();
	return 0;
}