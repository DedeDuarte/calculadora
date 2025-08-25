#ifndef NODE_HPP
#define NODE_HPP

#include <string>

class Node {
private:
    std::string name;
    int age;
    Node* next;
    Node* prev;

public:
    Node(std::string name, int age);
    Node(std::string name, int age, Node* next, Node* prev);

    void setName(std::string name);
    void setAge(int age);
    void setNext(Node* next);
    void setPrev(Node* prev);

    Node* popNode();

    Node* getNext();
    Node* getPrev();
    std::string getName();
    int getAge();
    
    std::string toString();
};

#endif