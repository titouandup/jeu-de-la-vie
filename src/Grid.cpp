#include "Grid.hpp"
#include "GameException.hpp"

Grid::Grid(int width, int height, bool toric)
    : width(width), height(height), toric(toric)
{
    if (width <= 0 || height <= 0) {
        throw GameException("Invalid grid size");
    }
    cells.assign(height, std::vector<Cell>(width, Cell(false)));
}

const Cell& Grid::getCell(int x, int y) const {
    if (x < 0 || x >= width || y < 0 || y >= height) {
        throw GameException("Cell out of grid");
    }
    return cells[y][x];
}
