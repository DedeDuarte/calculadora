#ifndef LINKEDLIST_HPP
#define LINKEDLIST_HPP

#include <string>
#include "Node.hpp"

class LinkedList {
private:
    Node* first;
    Node* last;
    int sizeList;

    void setFirst(Node* first);
    void setLast(Node* last);

public:
    LinkedList();

    void addFirst(std::string name, int age);
    void addLast(std::string name, int age);
    void addIndex(int index, std::string name, int age);

    Node* getFirst();
    Node* getLast();
    Node* getIndex(int index);

    int size();
    bool isEmpty();
    
    std::string toString();};

#endif