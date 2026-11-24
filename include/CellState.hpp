#pragma once  
#include <memory>
class CellState{
    public:
    virtual bool isAlive() const = 0;
    virtual ~CellState(){}
    virtual std::unique_ptr<CellState> nextState(int aliveNeighbours) const=0;
};