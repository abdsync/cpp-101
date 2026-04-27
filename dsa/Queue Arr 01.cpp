#include <iostream>
using namespace std;
class Queue
{
	public:
		#define N 5
		int queue[N];
		int front = -1;
		int rear = -1;
		
		void enqueue(int x)
		{
			if ( rear == N-1)
			{
				cout << " Already full " << endl;
			}
			else if ( front == -1 && rear == -1)
			{
				front = rear = 0;
				queue[rear] = x;
			}
			else 
			{
				rear ++;
				queue[rear] = x;
			}
		}
		
		void dequeue()
		{
			if (front == rear)
			{
				front = rear = -1; // Making it garbage value
			}
			else if (front == -1 && rear == -1)
			{
				cout << " Nothing to dequeue " << endl;		
			}
			else 
			{
				cout << " The element being dequeued " << queue[front] << endl;
				front ++; // Making the prev garbage 
			}
		}
		
		void peek()
		{
			if (front == -1 && rear == -1)
			{
				cout << " Nothing to dequeue " << endl;		
			}
			else 
			{
				cout << " First element of the queue is " << queue[front] << endl;
			}
		}
		
		void display()
		{
			int i; 
			for (i=front; i<rear+1; i++)
			{
				cout << " Data in the queue is " << queue[i] << endl;
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