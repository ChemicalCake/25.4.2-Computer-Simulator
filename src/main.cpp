#include <iostream>
#include "cpu.h"
#include "disk.h"
#include "gpu.h"
#include "kbd.h"
#include "ram.h"

int main() {
    CPU cpu;
    Disk disk;
    GPU gpu;
    KBD kbd;
    RAM ram;

    std::string command;

    while (true) {
        std::cout << "Enter a command ('sum', 'save', 'load', 'input', 'display', 'exit'): \n";
        std::cin >> command;

        if (command == "sum") {
            cpu.compute(ram);
        } else if (command == "save") {
            disk.save(ram);
            std::cout << "Data saved to disk." << "\n";
        } else if (command == "load") {
            disk.load(ram);
            std::cout << "Data loaded from disk." << "\n";
        } else if (command == "input") {
            kbd.input(ram);
            std::cout << "Data input complete." << "\n";
        } else if (command == "display") {
            gpu.display(ram);
        } else if (command == "exit") {
            break;
        } else {
            std::cout << "Invalid command. Try again." << "\n";
        }
    }
    system("pause");
    return 0;
}