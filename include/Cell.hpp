#pragma once
#include <iostream>
#include "CellState.hpp"

class Cell{
    protected:
    bool alive;

    public : 
        Cell(bool e){
            alive = e;
        }

    virtual ~Cell(){}

     virtual bool isAlive() const{
        return alive;
    }

};
