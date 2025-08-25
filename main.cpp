#include <iostream>
#include "LinkedList.hpp"

int main(int argc, char *argv[]) {
    LinkedList *ll = new LinkedList();

    ll->addFirst("Andre", 19);
    ll->addFirst("Matheus", 20);
    ll->addLast("Naoto", 20);
    ll->addIndex(2, "Lucas", 20);

    // ll->popFirst();
    // ll ->popLast();
    ll->popIndex(1);

    std::cout << ll->toString() << std::endl;

    return 0;
}