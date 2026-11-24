#include "Cell.hpp"
#include <utility>

Cell::Cell(std::unique_ptr<CellState>s):state(std::move(s)){}

bool Cell::isAlive() const{
    return state -> isAlive();
}
