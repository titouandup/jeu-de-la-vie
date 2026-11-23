#include <iostream>
#include "EtatCellule.hpp"

class Cellule{
    protected:
    bool etat;

    public : 
        Cellule(bool e){
            etat = e;
        }

    virtual ~Cellule(){}

     virtual bool EstVivante() const{
        return etat;
    }

};
