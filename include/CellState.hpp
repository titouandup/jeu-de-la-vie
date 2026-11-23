
class CellState{
    public:
    virtual bool isAlive() const = 0;
    virtual ~CellState(){}
};