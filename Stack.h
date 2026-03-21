#ifndef STACK_H
#define STACK_H
#include "Node.h"
#include <iostream>
using namespace std;


//This stack class is implemented using a linked list of nodes
//Pointer topOfStack always points to the top element of the stack
//This stack contains push, pop, peek, and checks if the stack is empty
template <class V>
class Stack {
private:
    Node<V>* topOfStack; //Points to the node at the top of stack
public:

    //This constructor initializes an empty stack
    //If the stack is empty, topOfStack wil point to nullptr
    Stack() {
        topOfStack = nullptr;
    }

    //This void function adds a new element to the top of the stack
    void push(V value);
    V pop(); //Removes an element
    V peek();
    void peekTopThreeNotes(); //Checks the top of the stack for the first three notes
    bool isEmpty(); //Checks whether or not the stack is empty
};

//This push operation creates a new node and puts it at the top of the stack
//New node points towards previous of top node
template <class V>
void Stack<V>::push(V value) {
    Node<V>* newNode = new Node<V>(value); //Creates a new node starting at the value
    newNode->next = topOfStack; //New node points to top of the previous one
    topOfStack = newNode; //Updates top of the stack to the new node
}

//This pop operation creates a new node, placing it at the top of the stack
//Removes the node at top of the stack while also returning its value
template <class V> 
V Stack<V>::pop() {
    
    //If the stack is empty, there will be node to pop
    if(isEmpty()) {
        throw runtime_error("Stack is empty");
    }

    Node<V>* temp = topOfStack; //Stores the top node
    V value = temp->data; //Saves val stored in that temp node

    topOfStack = topOfStack->next; //Moves the current top pointer to the next node

    delete temp; //Frees up memory of the removed node

    return value; //Returns the popped value
}

//This peek function displays the first three notes from the stack w/o removing them 
//Traverses the linked list begining from the top of the stack and prints the three first values
template <class V>
void Stack<V>::peekTopThreeNotes() {

    Node<V>* current = topOfStack; //Begins at the top of the stack
    int count = 0; //Counter that keeps track of how many notes have been output

    //Traverses the stack while nodes are remaining
    //Prints out three notes
    while (current != nullptr && count < 3) {
        cout << "Note " << count + 1 << ": " << current->data << "\n"; //Prints current note's data
        current = current->next; //Moves on to the next node in the stack 
        count++; //Increments the counter by 1, to ensure that the count remains equal or below 3
    }

    //If count is equal to 0, the stack is empty
    if(count == 0){
        cout << "Stack is empty" << "\n";
    }
}


//This peek operation returns the value at the top of the stack
//that will be next popped without removing it
template <class V>
V Stack<V>::peek() {

    if (isEmpty()) { //Checks if the stack is empty 
        throw runtime_error("Stack is empty");
    }

    //Returns data stored in top node, nothing is changed
    return topOfStack->data;
}

//This is empty operation returns true if the stack contains no elements
template <class V>
bool Stack<V>::isEmpty(){

    return topOfStack == nullptr;
}

#endif
