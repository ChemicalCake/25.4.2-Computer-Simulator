#include "kbd.h"
#include <iostream>

void KBD::input(RAM& ram) {
    for (int i = 0; i < 8; i++) {
        int value;
        std::cout << "Enter value " << i+1 << ": \n";
        std::cin >> value;
        ram.write(i, value);
    }
}