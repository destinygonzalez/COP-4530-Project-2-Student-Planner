//Each node stores the data and a pointer to the next node

#ifndef NODE_H
#define NODE_H

//This template class represents a single element in the linked list
//In this project, nodes are utilized to create the stack in the form of a linked list
//Each node contains the data and a pointer to the next node
template <class V> 
class Node {
    public:
        V data; //The value stored in the node
        Node<V>* next; //A pointer to the next node in the stack

        //A constructor that initializes the node with a value, setting
        //the next pointer to nullptr
        Node(V value) {
            data = value;
            next = nullptr;
        }
};

#endif
