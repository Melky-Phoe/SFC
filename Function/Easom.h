//
// Created by nothrax on 24.11.20.
//

#ifndef SFC_EASOM_H
#define SFC_EASOM_H

#include "Function.h"

//https://www.sfu.ca/~ssurjano/easom.html
class Easom : public Function{
public:
    double calculateFitness(Point point) override;
    //Point getMinPoint() override;
    double getMinFitness() override;
    Point getBoundary() override;
};

#endif //SFC_EASOM_H
