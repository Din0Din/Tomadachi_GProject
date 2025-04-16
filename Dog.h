#ifndef DOG_H
#define DOG_H

#include "Pet.h"

class Dog : public Pet {
public:
    Dog(std::string name);
    void react() const override;
    std::string toString() const override;
};

#endif
