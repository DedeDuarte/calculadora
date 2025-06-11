#include <iostream>

class node {
private:
    std::string data;
    node* next;
    node* prev;

public:
    node (std::string data) : data(data), next(nullptr), prev(nullptr) {}
    node (std::string data, node* next, node* prev) : data(data), next(next), prev(prev) {}

    std::string getData() {
        return this->data;
    }

    node* getNext() {
        return this->next;
    }

    node* getPrev() {
        return this->prev;
    }

    void setNext(node* next) {
        this->next = next;
    }

    void setPrev(node* prev) {
        this->prev = prev;
    }
};

class dQueue {
    // FIXME: Construir dQueue
};