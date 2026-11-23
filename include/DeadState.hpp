#include <iostream>
#include <CellState.hpp>

class DeadState : public CellState{
    public: 
    bool isAlive() const override {
        return false;
    }

};