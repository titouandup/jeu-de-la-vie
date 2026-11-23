#include <iostream>
#include <Cell.hpp>

class DeadState : public Cell{
    public: 
    DeadState() : Cell(false) {}

    bool isAlive() const override {
        return false;
    }

};