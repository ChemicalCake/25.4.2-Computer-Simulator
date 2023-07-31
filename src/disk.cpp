#include "disk.h"
#include <fstream>

void Disk::save(const RAM& ram) {
    std::ofstream outFile("data.txt");
    for (int i = 0; i < 8; i++) {
        outFile << ram.read(i) << "\n";
    }
    outFile.close();
}

void Disk::load(RAM& ram) {
    std::ifstream inFile("data.txt");
    int value;
    for (int i = 0; i < 8; i++) {
        inFile >> value;
        ram.write(i, value);
    }
    inFile.close();
}