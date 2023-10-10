#pragma once 
#include <iostream>
#include <string>

template <class T>
class Node {
public:
    T x;
	Node<T> *next;
    Node(T new_data);
    ~Node();
    T getData();
    void Delete_this();
    void Printnode();
};

template <class T>
Node<T>::Node(T new_data) {
    x = new_data;
    next = NULL;
}

template <class T>
Node<T>:: ~Node() {
    delete next;
}

template <class T>
T Node<T>::getData() {
    return x;
}

template <class T>
void Node<T>::Delete_this() {
    if (next)
        next->Delete_this();
    delete this;
}

template <class T>
void Node<T>::Printnode() {
    if (next != NULL)
        std::cout << x << ", ";
    else
        std::cout << x << ".  ";
}
