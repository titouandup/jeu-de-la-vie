#include <iostream> 
#include <Cellule.hpp>

class CelluleVivante : public Cellule{
    public: 
    CelluleVivante() : Cellule(true){} 

    bool EstVivante() const override{
        return true;
    }
};