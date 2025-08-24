#include "Node.hpp"

#include <string>
#include <sstream>
#include "Colors.hpp"

Node::Node(std::string name, int age) {
    this->name = name;
    this->age  = age;
    this->next = nullptr;
    this->prev = nullptr;
}

Node::Node(std::string name, int age, Node* next, Node* prev) {
    this->name = name;
    this->age  = age;
    this->next = next;
    this->prev = prev;
}

void Node::setName(std::string name) {
    this->name = name;
}

void Node::setAge(int age) {
    this->age = age;
}

void Node::setNext(Node* next) {
    this->next = next;
}

void Node::setPrev(Node* prev) {
    this->prev = prev;
}

Node* Node::getNext() {
    return this->next;
}

Node* Node::getPrev() {
    return this->prev;
}

std::string Node::getName() {
    return this->name;
}

int Node::getAge() {
    return this->age;
}

std::string Node::toString() {
    std::ostringstream sb;
    sb << Colors::red() << "Name: " << Colors::cyan() << this->name << "\n"
       << Colors::red() << "Age:  " << Colors::cyan() << this->age  << "\n"
       << Colors::reset();

    return sb.str();
}