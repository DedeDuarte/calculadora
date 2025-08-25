#include <iostream>
#include "LinkedList.hpp"
#include "Colors.hpp"

int main(int argc, char *argv[]) {
    LinkedList *ll = new LinkedList();

    ll->addFirst("Andre", 19);
    ll->addFirst("Matheus", 20);
    ll->addLast("Naoto", 20);
    ll->addIndex(2, "Lucas", 20);

    int index = -1;

    if (argc > 1) {
        index = std::stoi(argv[1]);
        ll->popIndex(index - 1);
        std::cout << Colors::darkYellow()
                  << "=== Teste LinkedList->popIndex(index) ===\n"
                  << "Index esolhido: " << Colors::darkCyan() << index - 1 << " (" << index << ")\n" << Colors::reset()
                  << std::endl;
    }
    
    std::cout << ll->toString() << std::endl;

    return 0;
}