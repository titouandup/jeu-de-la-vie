#include <iostream>
#include <Cellule.hpp>

class CelluleMorte : public Cellule{
    public: 
    CelluleMorte() : Cellule(false) {}

    bool EstVivante() const override {
        return false;
    }

};