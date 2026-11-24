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

int Grid::countAliveNeighbours(int x, int y) const {
    if (x < 0 || x >= width || y < 0 || y >= height) {
        throw GameException("Cell out of grid");
    }
    int count = 0;
    for (int dy = -1; dy <= 1; dy++) {
        for (int dx = -1; dx <= 1; dx++) {
            if (dx == 0 && dy == 0) {
                continue;                       // on ne compte pas la cellule elle-même
            }
            int nx = x + dx;
            int ny = y + dy;
            if (toric) {
                nx = (nx + width) % width;      // le bord gauche rejoint le bord droit
                ny = (ny + height) % height;
            } else if (nx < 0 || nx >= width || ny < 0 || ny >= height) {
                continue;                       // hors grille : pas de voisin
            }
            if (getCell(nx, ny).isAlive()) {
                count++;
            }
        }
    }
    return count;
}

bool Grid::operator==(const Grid& other) const {
    if (width != other.width || height != other.height || toric != other.toric) {
        return false;                           // dimensions ou mode différents : grilles différentes
    }
    for (int y = 0; y < height; y++) {
        for (int x = 0; x < width; x++) {
            if (cells[y][x].isAlive() != other.cells[y][x].isAlive()) {
                return false;                   // une seule case différente suffit
            }
        }
    }
    return true;
}