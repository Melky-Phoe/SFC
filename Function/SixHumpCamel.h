//
// Created by nothrax on 24.11.20.
//

#ifndef SFC_SIXHUMPCAMEL_H
#define SFC_SIXHUMPCAMEL_H

#include "Function.h"
//https://www.sfu.ca/~ssurjano/camel6.html

class SixHumpCamel : public Function {
public:
    double calculateFitness(Point point) override;
    //Point getMinPoint() override;
    double getMinFitness() override;
    Point getBoundary() override;
};


#endif //SFC_SIXHUMPCAMEL_H
