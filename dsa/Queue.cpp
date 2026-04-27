#include <iostream>
#include <cstdlib>  // For malloc and free

using namespace std;

struct Node {
    int data;
    struct Node* next;
};

struct Node* front = NULL;
struct Node* rear = NULL;

// Enqueue an integer 
void Enqueue(int x) {
    struct Node* temp = (struct Node*) malloc(sizeof(struct Node)); // Fixed typo
    temp->data = x;
    temp->next = NULL; // Fixed typo (NUll -> NULL)
    
    if (front == NULL && rear == NULL) {
        front = rear = temp;
        return;
    }
    
    rear->next = temp;
    rear = temp;
}

// Dequeue an integer
void Dequeue() {
    struct Node* temp = front;
    if (front == NULL) {
        cout << "Queue is empty" << endl;
        return;
    }
    
    if (front == rear) {
        front = rear = NULL;
    } else {
        front = front->next;
    }
    
    free(temp);
}

// Return the front of the queue
int Front() {
    if (front == NULL) {
        cout << "Queue is empty" << endl;
        return -1;  // Returning -1 to indicate the queue is empty
    }
    return front->data;
}

// Print all elements in the queue
void Print() {
    if (front == NULL) {
        cout << "Queue is empty" << endl;
        return;
    }
    
    struct Node* temp = front;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    Enqueue(2); 
    Print();
    
    Enqueue(4); 
    Print();
    
    Enqueue(6); 
    Print();
    
    Dequeue(); 
    Print();
    
    Enqueue(8); 
    Print();
    
    cout << "Front: " << Front() << endl;

    return 0;
}

