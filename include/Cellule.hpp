#include <iostream>

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
