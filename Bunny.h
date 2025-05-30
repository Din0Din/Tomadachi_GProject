// Header file that includes the Pet header file and creates a new function and string 
#ifndef Bunny_H
#define Bunny_H

#include "Pet.h"

class Bunny : public Pet {
public:
    Bunny(std::string name);
    void react() const override;
    std::string toString() const override;
};

#endif
