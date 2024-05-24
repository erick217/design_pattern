//
// Created by cctang on 2024-05-18.
//


class Subject;
class Observer{
public:
    Subject* subject;
    virtual void update() = 0;
};

class OctalObserver : Observer{
public:
    OctalObserver(Subject* subject);
    void update() override;
};


class BinaryObserver : Observer{
public:
    BinaryObserver(Subject* subject1);
    void update() override;
};


