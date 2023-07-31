#include "ram.h"

RAM::RAM() : buffer(8) {}

int RAM::read(int index) const {
    return buffer[index];
}

void RAM::write(int index, int value) {
    buffer[index] = value;
}