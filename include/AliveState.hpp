#include <iostream> 
#include <Cell.hpp>

class AliveState : public Cell{
    public: 
    AliveState() : Cell(true){} 

    bool isAlive() const override{
        return true;
    }
};