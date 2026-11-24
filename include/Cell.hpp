#pragma once
#include <iostream>
#include <memory>
#include "CellState.hpp"

class Cell{
    private: 
    std::unique_ptr<CellState>state;

    public: 
    bool isAlive() const; 
    bool isObstacle;

    Cell(std::unique_ptr<CellState>s);
};
