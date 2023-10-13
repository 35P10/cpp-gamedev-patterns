#include "Linkedlist.h"

LinkedList::LinkedList() {
    size = 0;
    head = NULL;
}


LinkedList::LinkedList(DataNode x) {
    size = 1;
    head = new Node<DataNode>(x);
}

int LinkedList::getSize() {
    return size;
}

void LinkedList::insert(DataNode x, int posicion) {
    Node<DataNode>* cont = head;
    Node<DataNode>* New_node = new Node<DataNode>(x);

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

void LinkedList::pushFront(DataNode data) {
    this->insert(data, 0);
};

void LinkedList::pushBack(DataNode data) {
    this->insert(data, this->size + 1);
};

DataNode LinkedList::getFront() {
    return head->data;
};

void LinkedList::remove(int posicion) {
    if (posicion > -1 && posicion < size) {
        Node<DataNode>* cont = head;
        Node<DataNode>* cont2 = head->next;
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

void LinkedList::popFront() {
    this->remove(0);
};

void LinkedList::popBack() {
    this->remove(this->size - 1);
};

int LinkedList::search(DataNode data) {
    int cont = 0;
    Node<DataNode>* temp = head;
    while (temp != NULL) {
        if (temp -> data.position == data.position)
            return cont;
        else {
            temp = temp -> next;
            cont++;
        }
    }
    return -1;
}

void LinkedList::print() {
    if ((size == 0) && (head == NULL))
    {
        std::cout << "Lista Vacia\n";
    }
    else if ((size == 0) && (head != NULL))
    {
        head-> Printnode();
    }
    else
    {
        Node<DataNode>* i = head;

        while (i != NULL)
        {
            i-> Printnode();
            i = i->next;
        }
        std::cout << "Tamano: " << this->size << " Head: " << this->head->data.position << std::endl;
    }
}