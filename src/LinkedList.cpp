#include "LinkedList.hpp"

#include <string>
#include <sstream>
#include "Node.hpp"
#include "Colors.hpp"

void LinkedList::setFirst(Node* first) {
    this->first = first;
}

void LinkedList::setLast(Node* last) {
    this->last = last;
}

LinkedList::LinkedList() {
    this->setFirst(nullptr);
    this->setLast(nullptr);
}

void LinkedList::addFirst(std::string name, int age) {
    if (this->sizeList == 0) {
        Node* newNode = new Node(name, age);
        newNode->setNext(newNode);
        newNode->setPrev(newNode);

        this->setFirst(newNode);
        this->setLast(newNode);

        this->sizeList++;
        return;
    }

    if (this->sizeList != 0) {
        Node* newNode = new Node(name, age);
        newNode->setNext(this->first);

        this->first->setPrev(newNode);
        this->setFirst(newNode);

        this->sizeList++;
        return;
    }

    throw std::runtime_error("Unexpected error: LinnkedList addFirst()");
}

void LinkedList::addLast(std::string name, int age) {
    if (this->sizeList == 0) {
        Node* newNode = new Node(name, age);
        newNode->setNext(newNode);
        newNode->setPrev(newNode);

        this->setFirst(newNode);
        this->setLast(newNode);

        this->sizeList++;
        return;
    }

    if (this->sizeList != 0) {
        Node* newNode = new Node(name, age);
        newNode->setPrev(this->last);
        
        this->last->setNext(newNode);
        this->setLast(newNode);

        this->sizeList++;
        return;
    }

    throw std::runtime_error("Unexpected error: LinnkedList addLast()");
}

void LinkedList::addIndex(int index, std::string name, int age) {
    if (this->sizeList == 0) {
        throw std::runtime_error("List is empty. No index '" + std::to_string(index) + "'");
    }

    Node* current = this->first;
    for (int i = 0; i < index; i++) {
        current = current->getNext();
        if (current == nullptr) throw std::runtime_error("Index out of bound.");
    }

    Node* newPrev = current->getPrev();
    Node* newNode = new Node(name, age, current, newPrev);

    if (newPrev != nullptr) newPrev->setNext(newNode);
    else this->setFirst(newNode);

    current->setPrev(newNode);

    this->sizeList++;
}

Node* LinkedList::getFirst() {
    return this->first;
}

Node* LinkedList::getLast() {
    return this->last;
}

Node* LinkedList::getIndex(int index) {
    Node* current = this->first;

    for (int i = 0; i < index; i++) {
        current = current->getNext();
        if (current == nullptr) throw std::runtime_error("Index out of bound.");
    }

    return current;
}

int LinkedList::size() {
    return this->sizeList;
}

bool LinkedList::isEmpty() {
    return this->sizeList == 0;
}

std::string LinkedList::toString() {
    std::stringstream sb;
    Node* current = this->first;
    
    int i = 1;
    while (current != nullptr) {
        sb << Colors::red() << "Pos:  " << Colors::cyan() << i<< '\n'
            << current->toString()       << '\n';

            i++;
        current = current->getNext();
    }

    return sb.str();
}