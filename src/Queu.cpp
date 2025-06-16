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

class queue {
private:
    int size;
    node* first;
    node* last;

    void setFirst(node* newNode) {
        this->first = newNode;
    }

    void setLast(node* newNode) {
        this->last = newNode;
    }

public:
    queue (int size) : size(size), first(nullptr), last(nullptr) {}
    queue (int size, node* first, node* last) : size(size), first(first), last(last) {}

    void addFirst (std::string data) {
        node* newNode = new node(data, nullptr, first);
        if (first != nullptr) first->setPrev(newNode);
        setFirst(newNode);
        this->size++;
    }

    void addLast (std::string data) {
        node* newNode = new node(data, last, nullptr);
        if (last != nullptr) last->setNext(newNode);
        setLast(newNode);
        this->size++;
    }

    std::string getFirst() {
        return first->getData();
    }

    std::string getLast() {
        return last->getData();
    }

    std::string getIndex(int index) {
        if (this->size - 1 < index) throw std::runtime_error("\nERROR: Index out of bounds!\n");
        
        node* current = this->first;
        for (int i = 0; i < index; i++) current = current->getNext();
        
        return current->getData();
    }
    
    // FIXME: Verificar lógica do popFirst() e popLast()
    std::string popFirst() {
        node* save = this->first;
        setFirst(this->first->getNext());
        if (this->first == nullptr) setLast(nullptr);

        delete save;
        this->size--;
        return save->getData();
    }

    std::string popLast() {
        node* save = this->last;
        setLast(this->last->getPrev());
        if (this->last == nullptr) setFirst(nullptr);

        delete save;
        this->size--;
        return save->getData();
    }

    // FIXME: Verificar se caso index for first ou last se vai dar certo
    std::string popIndex(int index) {
        if (this->size - 1 < index) throw std::runtime_error("\nERROR: Index out of bounds!\n");

        node* current = this->first;
        for (int i = 0; i < index; i++) current = current->getNext();

        node* prev = current->getPrev();
        node* next = current->getNext();

        if (prev != nullptr) prev->setNext(current->getNext());
        if (next != nullptr) next->setPrev(current->getPrev());

        delete current;
        this->size--;
        return current->getData();
    }
};