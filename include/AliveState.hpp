#include "CellState.hpp"

class AliveState : public CellState{
    public: 
    bool isAlive() const override;
};