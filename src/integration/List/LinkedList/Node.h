#ifndef NODE_H
#define NODE_H

#include <iostream>

template <class T>
class Node {
public:
    T data;
    Node<T> *next;

    Node(T new_data) : data(new_data), next(nullptr) {}
    ~Node() {
        delete next;
    }

    T getData() {
        return data;
    }

    void Delete_this() {
        if (next)
            next->Delete_this();
        delete this;
    }

    void Printnode() {
        if (next != nullptr)
            std::cout << data << ", ";
        else
            std::cout << data << ".  ";
    }
};

#endif // NODE_H