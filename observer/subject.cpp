#include "list"

class Observer;
class Subject{
private:
    std::list<Observer*> observers;
    int state;

public:
    int getState(){
        return state;
    }
    void setState(int state){
        this->state = state;
    }

    void attach(Observer* observer){
        observers.push_back(observer);
    }

    void notifyObservers();
};

