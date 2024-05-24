//
// Created by cctang on 2024-05-18.
//
//#include "subject.cpp"
#include "observer.cpp"
#include "subject.cpp"
#include "iostream"
#include "algorithm"

void Subject::notifyObservers() {
    for(auto o : observers){
        o->update();
    }
}

void OctalObserver::update() {
    std::cout<<"OctalObserver"<<subject->getState()<<std::endl;
}

OctalObserver::OctalObserver(Subject *sub){
    subject = sub;
    subject->attach(this);
}

void BinaryObserver::update() {
    std::cout<<"BinaryObserver"<<subject->getState()<<std::endl;
}
BinaryObserver::BinaryObserver(Subject *sub){
    subject = sub;
    subject->attach(this);
}

int main(){
    Subject* subject = new Subject();
    new OctalObserver(subject);
    new BinaryObserver(subject);

    std::cout<<"First state change: 15"<<std::endl;
    subject->setState(15);
    std::cout<<"Second state change: 10";
    subject->setState(10);
}