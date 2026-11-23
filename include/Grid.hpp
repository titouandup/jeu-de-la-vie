#pragma once
#include <vector>
#include "Cell.hpp"

class Grid {
private:
    int width;
    int height;
    bool toric;
    std::vector<std::vector<Cell>> cells;   // cells[y][x] : ligne = y, colonne = x

public:
    Grid(int width, int height, bool toric);

    Cell& getCell(int x, int y);
    const Cell& getCell(int x, int y) const;
    int countAliveNeighbours(int x, int y) const;
    int getWidth() const;
    int getHeight() const;
    bool operator==(const Grid& other) const;
};
