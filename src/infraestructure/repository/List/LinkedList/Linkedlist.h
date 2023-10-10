#pragma once 
#include "Node.h"
#include <iostream>
#include <string>

template <class T>
class LinkedList
{
public:
    Node<T> *head;
    int size;

    LinkedList();
    LinkedList(T x);
    int getSize();
    void insertar(T x,int posicion);
    void remover(int posicion);
    int buscar(T x);
    void printLinkedList();
};

template <class T>
LinkedList<T>::LinkedList() {
    size = 0;
    head = NULL;
}

template <class T>
LinkedList<T>::LinkedList(T x) {
    size = 1;
    head = new Node<T>(x);
}

template <class T>
int LinkedList<T>::getSize() {
    return size;
}

template <class T>
void LinkedList<T>::insertar(T x, int posicion) {
    Node<T>* cont = head;
    Node<T>* New_node = new Node<T>(x);

    if (head == NULL || posicion == 0)
    {
        New_node->next = head;
        head = New_node;
    }
    else if (posicion > size)
    {
        while (cont->next != NULL)
            cont = cont->next;
        cont->next = New_node;
    }
    else
    {
        int x = 1;
        while (x < posicion) {
            cont = cont->next;
            x++;
        }
        New_node->next = cont->next;
        cont->next = New_node;
    }
    size++;
}

template <class T>
void LinkedList<T>::remover(int posicion) {
    if (posicion > -1 && posicion < size) {
        Node<T>* cont = head;
        Node<T>* cont2 = head->next;
        if (posicion == 0)
        {
            head = cont->next;
        }
        else
        {
            for (int i = 0; i < posicion - 1; i++) {
                cont = cont->next;
                cont2 = cont2->next;
            }
            cont->next = cont2->next;
        }
        size--;
    }
}

template <class T>
int LinkedList<T>::buscar(T x)
{
    int cont = 0;
    Node<T>* temp = head;
    while (temp != NULL) {
        if (temp->x == x)
            return cont;
        else {
            temp = temp->next;
            cont++;
        }
    }
    return -1;
}

template <class T>
void LinkedList<T>::printLinkedList() {
    if ((size == 0) && (head == NULL))
    {
        std::cout << "Lista Vacia\n";
    }
    else if ((size == 0) && (head != NULL))
    {
        head->Printnode();
    }
    else
    {
        Node<T>* i = head;

        while (i != NULL)
        {
            i->Printnode();
            i = i->next;
        }
        std::cout << "Tamano: " << size << " Head: " << head->x << std::endl;
    }
}

