#pragma once
#include <vector>

class RAM {
private:
    std::vector<int> buffer;

public:
    RAM();

    int read(int index) const;
    void write(int index, int value);
};