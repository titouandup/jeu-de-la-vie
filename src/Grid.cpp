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

Cell& Grid::getCell(int x, int y) {
    // On délègue à la version const pour ne pas dupliquer le test de bornes.
    // Le const_cast est sûr : *this n'est pas const dans cette méthode.
    const Grid& self = *this;
    return const_cast<Cell&>(self.getCell(x, y));
}

int Grid::getWidth() const {
    return width;
}

int Grid::getHeight() const {
    return height;
}
