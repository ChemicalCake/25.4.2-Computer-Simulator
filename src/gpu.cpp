#include "gpu.h"
#include <iostream>

void GPU::display(const RAM& ram) {
    for (int i = 0; i < 8; i++) {
        std::cout << ram.read(i) << " ";
    }
    std::cout << "\n";
}