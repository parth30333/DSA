#if !defined(Bird_H)
#define Bird_H
#include<iostream>

class Bird {
    public:
    virtual void eat() = 0;
    virtual void fly() = 0;
    // classes that inherits this class
    // has to implement these virtual functions 
};

class sparrow: public Bird {
    void eat() {
        std::cout << "Sparrow is eating\n";
    }
    void fly() {
        std::cout << "Sparrow is flying\n";
    }
};

class eagle: public Bird {
    void eat() {
        std::cout << "Eagle is eating\n";
    }
    void fly() {
        std::cout << "Eagle is flying\n";
    }
};

#endif // Bird_H



// ifnd used because it make sure to include bird.h one time even if we include it many times while using it